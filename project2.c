#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<stdio.h>
int snakewatergun( char you , char comp){
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r'  && comp == 'p')
    {
       return -1;

    }
    else if ( you == 'r'  && comp == 's')
    {
        return 1;
    }
    if (comp == 'r'  && you == 'p')
    {
       return 1;

    }
    else if (comp == 's'  && you == 'p')
    {
        return -1 ;
    }
    if (comp == 'r'  && you == 's')
    {
       return -1;

    }
    else if  (comp == 'p'  && you == 's')
    {
        return 1 ;
    }
    
    
    

}
    int main(){
        int num ;
        char you , comp ;
        srand(time(0));
         num = rand()%100+1; 
        if (num<33)
        {
            comp = 's';
        }else if (num > 33  && num < 66)
        {
            comp = 'p';
        }else
        {
            comp = 'r';
        }
        
        
        
        printf("enter 'r' for rock ,'p' for paper and 's' for scissor\n");
        scanf("%c" ,&you );
        int result = snakewatergun(you , comp);
         printf("you chose %c and comp choosen %c\n" , you ,comp);
        if(result== 0){
            printf("its a draw");
        }
        else if (result == 1)
        {
           printf("you win");
        }
        else if (result == -1)
        {
           printf("you lose");
        }
        
        
            
    return 0;
}