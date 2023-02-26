#include <stdio.h>

int main()
{
    int n,i,j,min,temp;
    printf("Enter the number of elements in the array=\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element=\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)       //selection sort has n-1 passes in i loop least and fastset here
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
    }
    printf("The sorted array is=\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}