#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
    
    int main(){
        struct employee e1;
        e1.code=22;
        e1.salary=33.2;
        // e1.name="aaditya"; this wont work here
        strcpy(e1.name , "aaditya");

        printf("%d , %f , %s" , e1.code, e1.salary,e1.name);
        
    return 0;
}