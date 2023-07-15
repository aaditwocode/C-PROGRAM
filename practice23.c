#include<stdio.h>

typedef struct date{
    int date , month , year;

} date;
     void display ( date d , date d1){
        printf("the date is %d/%d/%d\n" , d.date ,  d.month , d.year);
        printf("the date is %d/%d/%d\n" , d1.date ,  d1.month , d1.year);
     }
    int main(){
        date d={22,11,2023};
        date d1={30,5,2023};
        display(d , d1);
    return 0;
}