#include<stdio.h>

int main(){
    unsigned int x=0xDABDEFED;
    unsigned int replace =0xAB;
    unsigned int pos=3;

    // first type by char* by little endian
    unsigned char*ptr=(char *)&x;
    *(ptr+(pos-1))=replace;
    printf("%0X",x);

    // second approach by clear that pos and then set;
    unsigned int mask=0xFF;
    x&=(~(mask<<(8*(pos-1))));
    x|=(replace<<(8*(pos-1)));
    printf("%0X",x);
    return 0;
}