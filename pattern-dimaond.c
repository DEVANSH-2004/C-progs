#include <stdio.h>

int main()
{
    int i,j,k,l,p,x,y,z,a;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
            
        }
        
            for(p=1;p<=(i-1);p++)
            {
                printf("*");
            }

        
        for(l=5;l>=i;l--)
        {
            printf(" ");
        }


        

        
        printf("\n");
    }
for(i=1;i<=5;i++)
{
    for(x=1;x<=i;x++)
        {
            printf(" ");
        }
        for(y=5;y>=i;y--)
        {
            printf("*");
        }
        for(a=(5-i);a>=1;a--)
        {
            printf("*");
        }

        for(z=1;z<=i;z++)
        {
            printf(" ");
        }
        printf("\n");
    
}
}