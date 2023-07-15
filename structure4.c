#include<stdio.h>
#include<string.h>
struct  employee{
    int code;
    float salary;
    char name[10];
};
    int main(){
         struct employee harry ={332, 43.21 ,"aadi"};
         printf ("the code is %d" , harry.code);
         printf ("the code is %f" , harry.salary);
         printf ("the code is %s" , harry.name);
         
        
    return 0;
} 