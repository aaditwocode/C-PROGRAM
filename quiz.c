#include<stdio.h>

    int main(){
        int marks;
        printf("enter your marks");
        scanf("%d" , &marks);
        if (marks < 100 && marks >= 90)
        {
        printf("your grade is A");
        }
        if (marks <90 && marks >= 80 )
        {
            printf("your grade is B");
            
        }
        if (marks  < 80  && marks >= 70)
        {
           printf("your grade is C"); 
        }
        else
        {
            printf("you failed");
        }
        
        
        
        
    return 0;
}