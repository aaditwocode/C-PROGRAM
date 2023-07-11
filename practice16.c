#include<stdio.h>
void multiply(int *mulTable,int num ,int n){
    printf("the multiplication table of %d is :\n" , num);
    for (int i = 0; i < n; i++)
    {
      mulTable[i]=5*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d =%d\n" , num , i+1, mulTable[i]);
    }
    printf("**********\n");
    
    
}
    int main(){
        int mulTable[3][10];
        multiply(mulTable[0], 7,10);
        multiply(mulTable[1], 8,10);
        multiply(mulTable[2], 9,10);

    return 0;
}