#include<stdio.h>
int sum(int a, int b);
    int main(){
        int a =4, b=4;
        printf("the sum is %d\n" , sum(a,b));
   
    return 0;
}
int sum(int a, int b){
return a+b;
}