#include<stdio.h>

    int main()
    {
        int phy , chem , maths ;
        float total;
        printf("enter phy marks\n");
        scanf("%d" , phy);
        
        printf("enter chem marks\n");
        scanf("%d" ,chem);

        printf("enter maths marks\n");
        scanf("%d" , maths);


        total = (phy + chem + maths ) / 3;

        
        if 
         ( total>=40 || phy>=33 || chem>=33  || maths >=33)
        {
            printf("your total percent id %f and you passed somehow\n" , total);
        }
        else {printf("you failed with %f" , &total);}
        return 0;
    }
