#include<stdio.h>

    int main(){
        int marks[4];
        int *ptr;
        ptr=marks;
        // ptr=marks[0];
        // for (int i = 0; i < 4; i++)
        // {
          
        //    printf("enter the value of %d th student\n" , i+1);
        //    scanf("%d" , ptr);
        //    ptr++;
        // }
        for (int  i = 0; i < 4; i++)
        {
          printf("the value of marks of student is %d is %d\n"  ,i+1, marks[i]);
          ptr++;
        }
        
        
    return 0;
}