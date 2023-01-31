#include <stdio.h>
#include <math.h>

void sum(int,float*);


int main()
{
    int a;
    float s=0;
    printf("Enter the values of x=\n");
    scanf("%d",&a);
    sum(a,&s);
    printf("The sum of the series is=%0.3f\n",s);

}

int fact(int x)
{
    int p=1;
    for(int i=1;i<=x;i++)
    {
        p=p*i;
    }
    printf(" fact=%d\n",p);
    return(p);
}



void sum(int x, float *a)
{
    int i=1,n=1,p=1,sign=1;
    while(i!=10)
    {
        p=fact(n);
        *a=*a+sign*(pow(x,n)/p);
        sign*=-1;
        n+=2;
        i++;

    }
}