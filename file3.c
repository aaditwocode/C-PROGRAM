#include<stdio.h>

    int main(){
        FILE *ptr;
        // ptr = fopen("demo.txt" , "r");
        // char c = fgetc(ptr);
        // printf("the character is %c\n" , c);
        ptr =fopen("demo2.txt" , "w");
        putc('c'  ,ptr );
        putc('a'  ,ptr );
        putc('t'  ,ptr );
        fclose(ptr);
    return 0;
}