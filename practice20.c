#include <stdio.h>
#include <string.h>
int occurance(char st[], char c,int n)
{
    char *ptr = st[0];
    int count = 0;

    while (ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
    }
    return count;
    // int count = 0;
    // for(int i=0;i<n;i++)
    // {
    //     if(st[i]==c)
    //     count++;
    // }
    // return count;
}

int main()
{
    char st[] = "harry";
    int n = strlen("harry");
    int count = occurance(st, 'r',n);
    printf("the count is %d", count);
    return 0;
}