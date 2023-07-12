#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr + 1; //ptr-1 for decrypt
        ptr++;
    }
    
}
    int main(){
        char c[]="john sell tomatoes";
        encrypt(c); //decrypt
        printf("encrypted string is : %s" , c);
    return 0;
}