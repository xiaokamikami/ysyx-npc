#include "aix4.h"

#include <assert.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "difftests/memory.h"
uint8_t sram[CONFIG_MSIZE];

//uint64_t *dram;

void init_ram(char *img, long img_size){

    assert(sram !=NULL);
    int ret;
    FILE *fp = fopen(img, "rb");
    if (fp == NULL) {
        printf("Can not open img '%s'\n", img);
        assert(0);
    }

    fseek(fp, 0, SEEK_SET);
    ret = fread(sram, img_size, 1, fp);
    assert(ret == 1);
    fclose(fp);

    printf("init_ram:%s size: %d MB \n",img,CONFIG_MSIZE/1024/1024);
}

void init_axi4(){

}