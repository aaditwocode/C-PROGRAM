#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
} comp;
 void display 
 (comp c){
    printf("the real is %d"  complexnums.real);
    printf("the real is %d"  complexnums.complex);
 }

    int main()
    {
        comp complexnums[5];
  for (int i = 0; i < 5; i++)
  {
    printf("enter the real value of %d\n"  , i+1);
  scanf("%d" , &complexnums[i].real);
  }
    printf("enter the complex value of %d\n"  , i+1);
  scanf("%d" , &complexnums[i].complex);
  }
  display(complexnums[i]);
  
    return 0;
}