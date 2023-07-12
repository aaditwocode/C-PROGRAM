#include<stdio.h>
#include<string.h>

    int main(){
        char str[30]="aadi";
        char *str2="boy";
         int value =strcmp(str , str2);
        printf("now the str is %d" , value);
    return 0;
}