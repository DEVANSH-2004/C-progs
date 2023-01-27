#include <stdio.h>
#include <math.h>
int main()
{
    int x,i;
    float s=0;
    printf("Enter the values of x=\n");
    scanf("%d",&x);
    for(i=1;i<=7;i++)
    {
        s=s+(1/i)*(pow(((x-1)/x),i));

    }
    printf("Sum=%f\n",s);
}