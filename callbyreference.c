#include<stdio.h>
 void wrongswap(int a , int b);
void swap(int*a, int*b);
    int main(){
        int x=3, y=1;
        printf("the value of x and y  before swap is %d and %d\n" , x , y);
        wrongswap(&x,&y);
        printf("the value of x and y  after swap  is %d and %d\n" , x ,y);

    return 0;
}
void wrongswap(int a , int b){ 
    int temp;
    temp =a;
    a=b;
    b=temp;}
void swap(int*a, int*b){ int temp;
    temp =*a;
    *a=*b;
    *b=temp;}