#include <stdio.h>
void swap(int*,int*,int*);

int main()
{
    int x,y,z;
    printf("Enter 3 numbers =\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("x=%d\n y=%d\n x=%d\n",x,y,z);
    swap(&x,&y,&z);
    printf("swapped\n x=%d\n y=%d\n x=%d\n",x,y,z);
}

void swap(int *a,int *b,int *c)
{
    int r,s;
    r=*a;
    *a=*b;
    *b=*c;
    *c=r;
}