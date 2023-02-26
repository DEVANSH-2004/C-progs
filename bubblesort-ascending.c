#include <stdio.h>

int main()
{
   
   int n;
   printf("Enter the number of elements in the array=\n");
   scanf("%d",&n);
   int a[n],i;
   for(i=0;i<n;i++)
   {
      printf("Enter elements of the array=\n");
      scanf("%d",&a[i]);
   }
   int j,p;
   for(i=0;i<n;i++)
   {
     for(j=i;j<n-1;j++)  //n-i-1 also work
     {
        if(a[i]>=a[j+1])
        {
            p=a[i];
            a[i]=a[j+1];
            a[j+1]=p;
        }
     }
   }
   printf("The array sorted in ascending order is=\n");
   for(i=0;i<5;i++)
   {
      printf("%d\n",a[i]);
   }

    
}