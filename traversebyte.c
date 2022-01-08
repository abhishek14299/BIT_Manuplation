#include<stdio.h>

int main(){
    // traverse through bytes of a number
    unsigned int x=0x12DAEDBF;
    unsigned char *ptr=(char *)&x;
    unsigned int byte=sizeof(x);
    while(byte>0){
        printf("%0X",*ptr);
        ptr++;
        byte--;
    }
    unsigned char b=0xc;
    printf("%0X",(int)b);

/* second approach*/
    while(x){
        printf("%0X",x&0xFF);
        x>>=8;
    }

    return 0;
}