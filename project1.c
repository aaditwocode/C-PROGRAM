#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main(){
        int number , guess , nguesses=0;
        srand(time ( 0 ) );
        number=rand()%100+1;    // random number between 1 to 100
        printf("the number generated is %d\n" ,number);
    do
    {
        printf("guess between 1 to 100\n");
        scanf("%d" ,guess);
        if (guess>number)
        {
            printf("lower number please\n");
        }
        
       else if(number>guess)
       
       {
         printf("higher number please\n");
       }
       
        else
        {
            printf("you guessed in %d attempts\n" , nguesses);
        }
        nguesses++;
        
    } while(guess!=number);
    
    return 0;
}