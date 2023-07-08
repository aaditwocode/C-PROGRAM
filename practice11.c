#include<stdio.h>
void sumandaverage(int a, int b, int*sum,float*avg );
    int main(){
        int i =3 , sum;
        int j=2;
        float avg;
        sumandaverage(i , j , &sum , &avg);
        printf("the value of sum is %d\n" , sum);
        printf("the value of average is %f\n" ,avg);
    return 0;
}
void sumandaverage(int a, int b, int*sum,float*avg ){
    *sum=a+b;
    *avg=  (float)(a+b)/2;
    return *sum;
    return *avg;
}