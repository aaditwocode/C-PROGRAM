#include<stdio.h>
// void printarray(int *ptr, int n){
   
//    for(int i = 0; i < n; i++)
//         {
//          printf("the value of element of %d is %d\n" , i+1,*(ptr+i));
//         }
// }
void printarray(int ptr[], int n){
   
   for(int i = 0; i < n; i++)
        {
         printf("the value of element of %d is %d\n" , i+1,ptr[i]);
        }
//         ptr[3]=443;//can change the value of 4 the element to this as it has power
}
      int main(){  
        int arr[] ={1,2,3,4,5};
        printarray(arr,5); 

    return 0;
}