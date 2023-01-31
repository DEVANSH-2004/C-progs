#include <stdio.h>
int fact(int a)
{
    int p=1;
    if(a==0 || a==1)
    {
        return(1);  //it defines that fact(1)=1 the all the values of fact are likewise calculated

    }
    else{
        p=a*fact(a-1);
    }
    return(p);
}

int main()
{
    int n,s;
    printf("Enter a number for its factorial calculation=\n");
    scanf("%d",&n);
    s=fact(n);
    printf("The factorial of %d is =%d \n",n,s);
    
    }

