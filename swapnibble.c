#include<stdio.h>

int main(){
    unsigned int x=0XDABFEC;
    unsigned int pos=2;
    unsigned int swap=((x&(0X0F)<<(pos-1)*8)<<4) | ((x&(0XF0)<<(pos-1)*8)>>4);
    printf("%0X\n",swap);// mask of swaped nibble

    // replace with swap
    unsigned int mask=0xFF;
    x&=(~(mask<<(8*(pos-1))));// clear the first byte 
    x|=swap;// set swap with that byte
    printf("%0X\n",x);

    return 0;
}