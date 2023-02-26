#include <stdio.h>

int main()
{
    int n,i,j,k,f=0;
    printf("Enter the number of elements in the array=\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element in an array=\n");
        scanf("%d",&a[i]);
    }
    printf("Enter value to be searched=\n");
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
            j=i;
            break;
        }
    }
    if(f==0)
    {
        printf("The number is not found\n");
    }
    if(f==1)
    {
        printf("The number is found at %d index\n",(j+1));
    }

}