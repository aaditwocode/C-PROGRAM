#include<stdio.h>
void slice(char * st , int m , int n){
   int i=0;
   while ((m+i)<n)
   {
    i++;
    st[i]=st[i+m];
   }
   st[i]='\0';
   
}
    int main(){
        char st[]="harry";
        slice (st,1,3);
        printf("%s" , st);

    return 0;
}