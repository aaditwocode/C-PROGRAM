#include<stdio.h>

    int main(){
        int i=77 , k=22;
        int*z=&i;
        int*a=&k;
        printf("the address of i or value of z is %u\n" , z);
        // z=z+1;
        // z=z-1;
        a=z-2;
        printf("the address of i or value of z is %u\n" , z);
        printf("the address of k or value of a is %u\n" , a);
    return 0;
}