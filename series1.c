#include <stdio.h>

int main()
{
    int p=1,j;
    float i,s=0;
    for(i=1;i<=7;i++)
    {
        p=1;
        for(j=1;j<=i;j++)
           p=p*j;
        s=s+(i/p);
    }
    printf("The sum of series is= %f",s);

}