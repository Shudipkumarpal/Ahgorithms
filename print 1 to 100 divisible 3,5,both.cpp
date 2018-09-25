#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Divisible by 3 are :\t\n");
    for(i=0;i<=100;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n\nDivisible by 5 are :\t\n");
    for(j=0;j<=100;j++)
    {
        if(j%5==0)
        {
            printf("%d ",j);
        }
    }
    printf("\n\nDivisible by 3 & 5 are :\t\n");
    for(k=0;k<=100;k++)
    {
        if(k%3==0 && k%5==0)
        {
            printf("%d ",k);
        }

    }
    return 0;
}

