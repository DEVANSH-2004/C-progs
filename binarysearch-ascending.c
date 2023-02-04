#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements to be entered in the array\n");  //binary search when the elements in the array are arranged in ascending order
    scanf("%d",&n);
    int l=0,u=(n-1),mid,f=0,i,p;
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter an element at position no. %d\n",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched=\n");
    scanf("%d",&p);
    while(l<=u)
    {
        mid=(l+u)/2;
        if(a[mid]==p)
           {
            printf("Number found at position no. %d",mid+1);
            f=1;
            break;
           }
        else if(a[mid]>p)
           u=mid-1;
        else
            l=mid+1;
           

    }
    if(f==0)
      printf("Number not found in the array");


}