#include<stdio.h>
#include<string.h>
 typedef struct  employee{
    int code;
    float salary;
    char name[10];
} emp;
void show (emp emp1){
    printf("the code for employess %d\n" , emp1.code);
    printf("the code for employess %f\n" , emp1.salary);
    printf("the code for employess %s\n" , emp1.name);
}

    int main(){
         emp e1;
         emp *ptr;
        ptr = &e1;
        
        ptr->code=110;
        ptr->salary=11.10;
        strcpy(ptr->name , "haary");
        show (e1);
       


    return 0;
}