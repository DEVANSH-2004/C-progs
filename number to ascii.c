#include <stdio.h>

int main()
{
    int a,i,b;
    printf("Enter the two limits a and b between which need to fund ascii values=\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
          printf("The ASCII value of %c is %d \n",i,i);
}