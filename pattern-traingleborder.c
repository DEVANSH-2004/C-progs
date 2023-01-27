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
            
        }if(i==5)
               printf("*");
        
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

}