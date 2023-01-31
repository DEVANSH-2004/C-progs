#include <stdio.h>
void primefact(int);

int main()
{
    int n;
    printf("Enter a number=\n");
    scanf("%d",&n);
    primefact(n);

}

void primefact(int a)
{
    if(a==1)
    {
        return;
    }
    else{
        int b=2;
        while(a%b!=0)
        {
            b++;
        }
        printf("%d\n",b);
        primefact(a/b);
    }
}