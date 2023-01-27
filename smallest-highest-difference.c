#include <stdio.h>

int main()
{
    int m,largest,smallest,i=0;
    printf("Enter a number=\n");
    scanf("%d",&m);
    largest=m;
    smallest=m;
    while(i<=6)
    {
        printf("Enter a number=\n");
        scanf("%d",&m);
        if(m>largest)
             largest=m;
        if(m<smallest)
            smallest=m;
        i++;
    }
    printf("the largest is=%d and the smallest is =%d\n",largest,smallest);
    printf("The difference is=%d\n",(largest-smallest));
    
}