#include<stdio.h>

    int main(){
      // int i=0 , n = 10 , sum;
      // while (i<=10)
      // {  sum +=i;
      //   i++;
      // }
      //  printf("the sum of 1 to 10 is %d" , sum);
       int i=0, n=3, factorial=1;
       for ( i = 1; i <= n; i++)
       {
        factorial *=i;
       }
       printf("the factorial of 3 is %d" , factorial);

       
  
    return 0;
}
