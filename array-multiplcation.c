#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,s=0;
    printf("Enter elements in array A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element=\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements in array B=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element=\n");
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix b=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            {
            s=s+a[i][k]*b[k][i];
            
            }
            c[i][j]=s;
        }
    }

    printf("Matrix C=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }


}