#include<stdio.h>

    int main(){
        FILE *ptr;
        int num;
        int digit = 778;
        FILE *fptr;
        ptr = fopen("aadi.txt" , "r");
        fscanf(ptr , "%d" , &num);
        printf("the value of num is %d\n" , num);
        fptr = fopen("aadi.txt" , "w");
        fprintf(fptr , "%d" , digit);
        fclose(ptr);
    return 0;

}