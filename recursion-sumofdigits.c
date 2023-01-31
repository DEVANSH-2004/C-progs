#include <stdio.h>
int sod(int);

int main()
{
    int n,s=0;
    printf("Enter a number to calculate its sum of digits=\n");
    scanf("%d",&n);
    s=sod(n);
    printf("Sum of digits using recursion is=%d",s);
}

int sod(int a)
{
    
    if(a!=0)
    {
        return(a%10+sod(a/10));
    }
    else{
        return(0);
    }
    
}
