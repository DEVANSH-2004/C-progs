#include <stdio.h>
void inputnum(int *);
void fact(int *);


int main()
{
    int a,b;
    inputnum(&a);
    fact(&a);
}

void inputnum(int *x)
{
    printf("Enter a number to calculate its factorial using recursion=\n");
    scanf("%d",&(x));
    if(*x>0){
        printf("The number %d  is postive and factorial calculation can be done \n",*x);
        fact(x);
    }
    else{
        printf("The number %d  is negative and factorial calculation cannot be done \n",*x);
        inputnum(x);
    }
}

void fact(int *x)
{
    int i,p=1;
    if(*x==1)
      printf("The factorial is=\n",1);
    else
       p=*x*fact(*(x-1));
    printf("The factorial is %d=\n",p);
    
}