#include <stdio.h>
#include <math.h>
void sum(int,float*);
int fact(int);

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
    if(x==1)
       return(1);
    else
      p=x*fact(x-1);
    printf("%d",p);
    return(p);
}



void sum(int x, float *a)
{
    int i=1,n=1,p=1,sign=1;
    while(i!=10)
    {
        p=fact(n);
        *a=*a+sign*(float)(pow(x,n)/p);
        sign*=-1;
        n+=2;
        i++;

    }
}