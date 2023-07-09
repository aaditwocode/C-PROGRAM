#include<stdio.h>

    int main(){
        // int marks[4];
        // printf("the marks of student 1\n");
        // scanf("%d" , marks[0]);
        // printf("the marks of student 2\n");
        // scanf("%d" , marks[1]);
        // printf("the marks of student 3\n");
        // scanf("%d" , marks[2]);
        // printf("the marks of student 4\n");
        // scanf("%d" , marks[3]);
        int marks[5];
        
        for (int  i = 0; i < 5; i++)
        {
            printf("the marks of student %d" , i+1);
            scanf("%d" , &marks[i]);
        }
        return 0;
       }
        
        
       
  