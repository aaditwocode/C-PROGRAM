#include<stdio.h>
void change(int a);
    int main(){
        int b=10 ;
        printf("the value of b is %d\n" , b);
        change(b);
        printf("the value of b now is %d\n" , b);
          return 0 ;
          }
          void change (int a){a = 33;}
