#include <isa.h>
#include <string.h> 
#include <stdio.h> 
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>


enum {
  TK_NOTYPE = 256,TK_HEX,TK_NUM,TK_REG,TK_EQ,TK_NEQ,TK_AND,TK_DEREF,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  
  {" +", TK_NOTYPE},      // spaces
  {"\\-",'-'},            // sub
  {"\\+", '+'},           // plus
  {"\\/",'/'},            // divide
  {"\\*",'*'},            // ride
  {"\\(",'('},            // (
  {"\\)",')'},            // )
  {"0x",TK_HEX},          // HEX
  {"[0-9]+",TK_NUM},      // 0-9
  {"[\\$][A-z0-9]+",TK_REG}, // letter
  {"==", TK_EQ},          // equal
  {"!=",TK_NEQ},          // !equal
  {"&&",TK_AND},          // lgAND
};

#define NR_REGEX ARRLEN(rules)

word_t eval(int p,int q);
bool check_parentheses(int p,int q);
word_t expr(char *e);
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;
  regfree(re);
  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[64];
} Token;

typedef struct brack {
  int star;
  int end;
} Brack;

typedef struct buffer {
  int priority;
  //*********
  //* /  = 3
  //+ -  = 2
  //*********
  int brack;
  int brack_count;
  int last_get;
} Buffer;
Buffer buffers;


static Brack bracks[8] __attribute__((used)) = {};
static Token tokens[64] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int Gets = 0;
static bool make_token(char *e) {
  int position = 0;
  int i;

  regmatch_t pmatch;

  nr_token = 0;
  buffers.brack = 0;
  Gets = 0;
  while (e[position] != '\0') {
    
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);
        position += substr_len;
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          case '(':
            tokens[Gets].type = '(';
            bracks[buffers.brack].star = Gets; 
            buffers.brack +=1;
            buffers.brack_count +=1;
            break;   
          case ')':
            tokens[Gets].type = ')';
            buffers.brack -=1;
            bracks[buffers.brack].end = Gets;
            break;   
          case '/':case'-':case '+':case TK_NUM:case TK_EQ:case TK_NEQ:case TK_AND:case TK_REG:case TK_HEX:
            tokens[Gets].type = rules[i].token_type;
            break;      
          case'*':
            if(((tokens[Gets-1].type != TK_NUM && tokens[Gets-1].type != TK_REG) ) || (Gets ==0)){tokens[Gets].type = TK_DEREF;}     
            else {tokens[Gets].type = rules[i].token_type;}
            break; 
          default: TODO();
        }
        if(rules[i].token_type){
          strncpy(tokens[Gets].str,substr_start,substr_len);
          //printf("count:%d\n",buffers.brack_count);
          //end 
          Gets +=1;   
        break;
        }
      }
    }
    
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  //printf("end");
  return true;
}
  
bool check_parentheses(int p,int q){  //**examine
  int left=0;
  int righ=0;
  
  if(tokens[p].type == '(' && tokens[q].type == ')' ){
    for(;p<=q;p++){
      if(tokens[p].type =='('){left+=1;}
      else if(tokens[p].type ==')'){righ+=1;}
    }
    if(left==righ){
      printf("true\n");
      return true;
      }
    else{
      printf("false, bad expression\n");
      return false;
      }
  }
  else{
    printf("false '('or')'\n");
    return false;
  }
}

int check_mainop(int p,int q){
  int hc=0,hc_end=0;
  printf("this:%d ",tokens[p].type);
  for (;p < q;p++)
  {
    switch (tokens[p].type){
    case '+' : case '-': case'*' :case'/':case TK_EQ:case TK_NEQ:case TK_AND: hc = p;break;
    case'(':
      if(hc !=0){
        return hc;
      }
      else break;
    case')':
      hc_end = check_mainop(p+1,q);
      if(hc_end!=0){return p+1;}
      else return hc;
      break;
    // case TK_REG:
    //   hc = p;
    //   return hc;
    //   break;
    }
  }
  return hc;
}


word_t eval(int p,int q){
  word_t val1=0,val2=0;
  int op=0;
  word_t cpu;
  bool success_flag;
  bool *success = &success_flag;
  //printf("p:%d,q:%d\n",p,q);
  if (p > q) {
    printf("Bad expression\n");
    assert(0);
    return 0;
      /* Bad expression */
  }
  else if (p == q) {
      /* Single token.
      * For now this token should be a number.
      * Return the value of the number.
      */
     if(tokens[p].type == TK_REG){
        cpu = isa_reg_str2val(tokens[p].str, success);
        if(success_flag ==true){
          //printf("cpu:0x%08lx\n",cpu);
          return cpu;
        }
        else{printf("REG_NAME:ERROR\n");return 0;}
     }
     
     return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == true) {
      /* The expression is surrounded by a matched pair of parentheses.
      * If that is the case, just throw away the parentheses.
      */
      return eval(p + 1, q - 1);
  }
  else {
      op = check_mainop(p,q);
      //printf("main:%d\n",op);
      if(tokens[op].type!=TK_REG){
        val1 = eval(p, op - 1);
        val2 = eval(op + 1, q);
      }
      // else{
      //   //printf("TK_REG");
      //   val1 = eval(op+2 , q );
      //   cpu = isa_reg_str2val(tokens[op].str, success);
      //   if(success_flag ==true){
      //     printf("cpu:0x%08lx\n",cpu);
      //     val2 = cpu;
      //  }
      //   else{val2 = 0;printf("REG_NAME:ERROR\n");} 
      //   op = op+1;
      // }
      printf("get_num:%ld,%ld,op:%d\n",val1,val2,tokens[op].type);
      switch (tokens[op].type) {
        case '+' : return val1 + val2;
        case '-' : return val1 - val2;
        case '*' : return val1 * val2;
        case '/' : return val1 / val2;       
        case '(' : return 0;
        case ')' : return 0;         
        case TK_EQ:if(val1 == val2)return true;
                  else return false;
        case TK_NEQ:if(val1 != val2)return true;
                  else return false;
        case TK_AND:if(val1 && val2)return true;
                  else return false;
        // case TK_REG:
        //   cpu = isa_reg_str2val(tokens[p].str, success);
        //   if(success_flag ==true){
        //     printf("cpu:0x%08lx\n",cpu);
        //     return cpu;
        //   }
        //   else{printf("REG_NAME:ERROR\n");return 0;}   
        default: assert(0);
      }
    }
    return 0;
}

word_t expr(char *e) {
  int i;
  word_t end_result = 0;
  if (!make_token(e)) {
    assert(0);
    return 0;
  }

  //**start 

      //printf("expr-p:%d , q:%d\n",bracks[0].star,bracks[0].end);
      end_result =eval(bracks[0].star,bracks[0].end);   

    //assert(0);

    /* TODO: Insert codes to evaluate the expression. */
  //TODO();

  //printf("expr-result:%ld\n",end_result);
  //printf("clean\n");

  for(i=0;i<8;i++){ 
    bracks[i].star=0;
    bracks[i].end=0;
  }
  for(i=0;i<64;i++){  //clean
    tokens[i].type= 0;
    strncpy(tokens[i].str, " ",2);
    memset(tokens[i].str, 0, 64);
  }
  return end_result;
}
