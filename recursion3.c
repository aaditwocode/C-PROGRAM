#include <stdio.h>
int sum(int x);
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    printf("sum=%d" , sum(n));
    return 0;
}
int sum(int x)
{
if (x == 0)
{
    return 0;
}
else if (x == 1)
{
    return 1;
}
else
{
    return x + sum(x - 1);
}
}