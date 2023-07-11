#include<stdio.h>

    int main(){
        int mulTable[3][10];
         for (int i = 0; i < 10; i++)
         {
          mulTable[0][i] =5*(i+1);
         }
         
        for (int i = 0; i < 10; i++)
        {
            printf("5X%d=%d\n" , i+1,mulTable[0][i]);
        }
        
        
    return 0;
}