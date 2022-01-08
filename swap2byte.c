#include<stdio.h>

int main(){
    unsigned int x=0XDABFEC;
    unsigned int byte=sizeof(x);
    unsigned int first_pos=2;
    unsigned int second_pos=1;
    unsigned int swap=((x&(0XFF)<<(second_pos-1)*8)<<8) | ((x&(0XFF)<<(first_pos-1)*8)>>8);
    printf("%0X\n",swap);

    // replace with swap
    unsigned int mask=0xFF;
    x&=(~(mask<<(8*(first_pos-1))));// clear the first byte
    x&=(~(mask<<(8*(second_pos-1)))); // clear the second byte 
    x|=swap;// set swap with that byte
    printf("%0X\n",x);


    return 0;
}