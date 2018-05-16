#include<stdio.h>
#include<stdint.h>

/*
 * main.c
 */
uint_least8_t i=1;
uint_least8_t j=11;

int main(void) {

    int y=34;
    j=0;
    for(i=0;i<25;i++){
        i=i+1;
        j=j+1;
        y=y+i*25;
    }


}
