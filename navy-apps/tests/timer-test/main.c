#include <stdio.h>
#include <assert.h>
#include <NDL.h>
int main(){
    uint32_t times=0;
    uint32_t sec=0;
    //NDL_Init(1);
    times = NDL_GetTicks();
    uint32_t boot_time = times/1000;
     
    while (sec<30)
    {
        times = NDL_GetTicks();
        //printf ("get timese %d \n",times);
        if((times/1000) >= boot_time+sec){
            printf("get time! %d s \n", sec);
            sec++;
        }
    }
    
    return 0;
}