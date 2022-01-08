#include<iostream>

int main(){
    unsigned int a=15;
    // count set bit
     int count=0;
    // while(a){
    //     (a&1)?++count:0;
    //     a>>=1;
    // }
    // std::cout<<count<<std::endl;

    // another aproach using unset the rightmost set bit and count when found rightmost set bit

    while(a){
        a=a&(a-1);
        count++;
    }
    std::cout<<count<<std::endl;
}