#include<iostream>

int main(){
    unsigned int x=0xDABDEFED;
    int startpos=3;
    int endpos=7;
    int shift=endpos-startpos+1;
    // set a range from 3 to 7 
    // 3 starting index from lsb and 7 end index from lsb
    // it include 3 and 7 also --> ----1111,1110,1101
    //                             ----0000 1111 1000   

    
    x|= ((~((~(0))<<shift))<<startpos);

    printf("%0X",x);


    return 0;
}