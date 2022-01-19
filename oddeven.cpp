#include<iostream>

#define ODDEVEN(a) (((a&0x55555555)<<1) | ((a&0xAAAAAAAA)>>1))

int main(){
    unsigned int a=1;
    /* 00000000,00000000,00000000,00000001
                                        */


   unsigned int swap= ODDEVEN(a);

    std::cout<<swap<<std::endl;
    
    return 0;

}
