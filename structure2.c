#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};



    int main(){
        struct employee e1,e2,e3;
        printf("enter the value of code  for e1");
        scanf("%d", &e1.code);
        printf("enter the value of code  for e2");
        scanf("%d", &e2.code);
        printf("enter the value of code  for e3");
        scanf("%d", &e3.code);
        printf("enter the value of salary for e1");
        scanf("%f" , &e1.salary);
        printf("enter the value of salary for e2");
        scanf("%f" , &e2.salary);
        printf("enter the value of salary for e3");
        scanf("%f" , &e3.salary);
        printf("enter the name of of e1");
        scanf("%s" , e1.name);
    return 0;
}