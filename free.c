#include<stdio.h>
#include<stdlib.h>

    int main(){
        int *ptr;
        int *ptr2;
        ptr = (int *)malloc( 6 *sizeof(int)) ;
        for (int i = 0; i < 500; i++)
        {
        ptr2 = (int *)malloc( 500 *sizeof(int)) ;
          printf("the size of i is %d"   , i);
          scanf("%d"  , &ptr[i]);
          free(ptr2);
        }
        for (int i = 0; i < 6; i++)
        {
            printf("the value is %d is %d" , i ,ptr[i]);
        }
        
        


    return 0;
} 