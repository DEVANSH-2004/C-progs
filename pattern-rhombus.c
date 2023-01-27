#include <stdio.h>

int main()
{
    int i,j,k,l,m;

    for(i=1;i<=10;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=10;k++)
        {
            printf("* ");
        }
        for(l=1;l<=i;l++)
        {
            printf(" ");
        }
        printf("\n");
    }
}