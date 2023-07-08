#include<stdio.h>

    int main(){
        int i=33;  
        int*j=&i;
        printf("the value of i is %d\n" , i);
        printf("the value of i is %d\n" , *j);
        printf("the address of i is %u\n" , j);
        printf("the address of i is %u\n" , &i);
        printf("the address of jis %u\n" , &j);
        printf("the address of jis %u\n" , *(&j));

    return 0;
}