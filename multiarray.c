#include <stdio.h>

int main()
{
    int m,n,i,j;
    printf("Enter number of rows=\n");
    scanf("%d",&m);
    printf("Enter number of columns=\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of the 2D array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element for Row %d Column %d=\n",(i+1),(j+1));
            scanf("%d",&a[i][j]);

        }
    }
    printf("\nPrinting 2D array=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}