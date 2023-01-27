#include <stdio.h>
int c_digit(int);
int reverse(int);
int palindrome_chk(int,int);
void display(int,int,int,int);


int main()
{
    int n,m,p,l;
    printf("Enter a number=\n");
    scanf("%d",&n);
    m=c_digit(n);
    p=reverse(n);
    l=palindrome_chk(n,p);
    display(n,p,l,m);
    return 0;
}

int c_digit(int a)
{
    int r,s=0;
    while(a!=0){
        r=a%10;
        s++;
        a=a/10;
    }
    return(s);

}

int reverse(int a)
{
    int r,s=0;
    while(a!=0){
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    return(s);
}

int palindrome_chk(int a,int b)
{
    int t;
    if(a==b)
       t=1;
    else
      t=0;
    return(t);

}

void display(int a, int b,int c,int d){
    printf("The number %d has = %d digits\n",a,d);
    printf("The reverse of the number %d is= %d\n",a,b);
    if(c==1)
       printf("The number %d is palindrome\n",a);
    else
        printf("The number %d is not palindrome\n",a);

}