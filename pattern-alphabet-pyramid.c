#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    for(i=71;i>=65;i--)
    {
        
        for(k=65;k<=i;k++)
        {
            printf("%c",k);
        }
        for(j=71;j>i;j--)
        {
            if(i==71)
               continue;
            printf(" ");
        }
        // for(j=70;j>=(i-2);j--)
        // {
        //     if(i==71)
        //        continue;
        //     printf(" ");
        // }
        if(i<=69)
        {
            for(j=70;j>i;j--)
            {
                printf(" ");
            }
        }
        for(k=i;k>=65;k--)
        {
            if(k==71)
               continue;
                
            printf("%c",k);
        }
        printf("\n");
    }
    // for(i=71;i>=65;i--)
    // {
    //     for(j=71;j>=(i-1);j--)
    //     {
    //         printf(" ");
    //     }
    //     for(k=i;k>=i;k--)
    //     {
    //         printf("%c",k);
    //     }
    // }
}