#include<stdio.h>
float force(float mass , float accn);
    int main(){
        int mass , accn;
        printf("enter mass ");
        scanf("%d" , &mass);
        printf("enter accn ");
        scanf("%d" , &accn);
        printf("the force is %0.1f" , force(mass , accn));
        return 0;

        
    return 0;
}
float force(float mass , float accn){
    float result =mass * accn;
    return result;
}