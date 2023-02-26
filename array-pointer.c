#include <stdio.h>

int main()
{
    int a[5]={98,89,87,79,99};
    int i; //accessing array elements address without pointers
    printf("Accessing array elements address without pointers \n");
    for(i=0;i<5;i++)
    {
        printf("address=%u",&a[i]);
        printf("\t value=%d\n",a[i]);
    }

    
    int *j; //accessing array elements address with pointers , *j is pointer variable
    printf("\nAccessing array elements address with pointers \n");
    for(i=0;i<5;i++)
    {
        j=&a[i];
        printf("address=%u",j);
        printf("\t value=%d\n",a[i]);
    }

    int b=4,*k,*m,z;
    k=&b;
    printf("%u\n",k);
    k=k+1;
    m=k+3;
    z=m-k;

    printf("%u\n%u\n%d",k,m,z);




}