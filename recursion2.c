#include<stdio.h>
int fibonacci(int x);

    int main(){
        int x,c ;
        printf("enter x");
        scanf("%d" , &x);
        printf("fibonacci sequence");
       for ( c = 0; c<x; c++)
       {
         printf("%d\n" , fibonacci(c));
       }
       

    return 0;
}
int fibonacci(int x){
    if (x==0)
    {
        return 0;
    }
    else if (x==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(x-1) +fibonacci (x-2);
    }
}
    