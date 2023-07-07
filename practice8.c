#include<stdio.h>
float average (float a , float b);
        int main(){
        float a, b;
        printf("enter a ");
        scanf("%d" , &a);
        printf("enter b ");
        scanf("%d" , &b);
        printf("the average is %f" , average (a,b));
        return 0;
}
float average (float a ,float  b){
   float result;
    result = (  a +  b ) / 2;
    return result;
}