#include<stdio.h>
#include<string.h>
struct  employee{
    int code;
    float salary;
    char name[10];
};

void show (struct employee emp){
    printf("the code for employess %d\n" , emp.code);
    printf("the code for employess %f\n" , emp.salary);
    printf("the code for employess %s\n" , emp.name);
}

    int main(){
        struct employee e1;
        struct employee *ptr;
        ptr = &e1;
        // (*ptr).code = 110;
        ptr->code=110;
        ptr->salary=11.10;
        strcpy(ptr->name , "haary");
        printf("%d"  , e1.code);


    return 0;
}