#include<stdio.h>
#include<stdlib.h>

    int main(){
        int *ptr;
        ptr = (int *)malloc( 6 *sizeof(int)) ;
        for (int i = 0; i < 6; i++)
        {
          printf("the size of i is %d"   , i);
          scanf("%d"  , &ptr[i]);
        }
        for (int i = 0; i < 6; i++)
        {
            printf("the value is %d is %d" , i ,ptr[i]);
        }
        // reallocate ptr using realloc ()
        ptr = realloc (10*sizeof(int));
         for (int i = 0; i < 5; i++)
        {
          printf("the size of i is %d"   , i);
          scanf("%d"  , &ptr[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            printf("the value is %d is %d" , i ,ptr[i]);
        }
        
        


    return 0;
}