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
            if(k==1)
              printf("*");
            else
                printf(" ");
            // if(i==5)
            //    printf("*");
        }
        // if(i==5)
        //        printf("*");
        
            for(p=1;p<=(i-1);p++)
            {
                if(p==(i-1))
                   printf("*");
                else
                    printf(" ");
                // if(i==5)
                //   printf("*");
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
            if(y==5)
              printf("*");
            else
                printf(" ");
        }
        for(a=(5-i);a>=1;a--)
        {
            if(a==1)
                   printf("*");
                else
                    printf(" ");
        }

        for(z=1;z<=i;z++)
        {
            printf(" ");
        }
        printf("\n");
}

}