#include <stdio.h>

int main()
{
    int n,s=0,r,m;
    printf("Enter a number=\n");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        r=m%10;
        s=s+(r*r*r);
        m=m/10;
    }
    if(s==n)
       printf("The number is armstrong");
    else
       printf("The number is not armstrong");


}