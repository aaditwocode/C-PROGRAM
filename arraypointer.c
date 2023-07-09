#include<stdio.h>

    int main(){
        int i=44;
        int*ptr=&i;
        printf("the address of i aka value of ptr is %u\n" , ptr);
        ptr++;
        //ptr++ plus four
        //ptr++ plus four again four size depend on instrument used
        //ptr=ptr+1 one increament
        printf("the address of i aka value of ptr is %u\n" , ptr);
        
    return 0;
}