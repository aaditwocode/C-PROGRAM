#include<stdio.h>
#include<string.h>

    int main(){
        char str[30]="aadi";
        char *str2="boy";
        strcat(str , str2);
        printf("now the str is %s" , str);
    return 0;
}