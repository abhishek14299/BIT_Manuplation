#include<iostream>
int main(){
    unsigned int a=2147483648;
    unsigned int no_of_bit = sizeof(a)*8;
    unsigned int rev_no=0;
    for(int i=0;i<no_of_bit;i++){
        int temp= (a&(1<<i));
        if(temp){
            rev_no |=(1<<((no_of_bit-1)-i));
        }
    }

    std::cout<<rev_no<<std::endl;

    return 0;
}