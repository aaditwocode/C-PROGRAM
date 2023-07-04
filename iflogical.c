#include<stdio.h>

    int main(){
        int age;
        int vippass = 0;
        vippass =1;

        printf("enter your age\n");
        scanf("%d", &age);

        if (age<=69 && age>=18 || vippass==1)
        {
            printf("you can drive");
        }
        else
        {
         printf("you are not eligible to drive anymore");
        }
        
        
    return 0;
}