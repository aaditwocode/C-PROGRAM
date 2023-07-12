#include<stdio.h>
#include<string.h>

int calculateStringLength (char* st){
    int len=0;
    char* ptr= st;
    while (*ptr!='\0')
    {
       len++;
       ptr++;
    }
    return len;
    
}
    int main()
    {
        char st[]="watermelon";
          int l;
          l =calculateStringLength(st);
          printf("the length of string is %d" , l);
    return 0;
}