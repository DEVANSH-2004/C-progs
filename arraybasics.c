#include <stdio.h>
void show(int*);

int main()
{
    int n,i;
    printf("Enter the number of elements to be entered in list=\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element in list=\n");
        scanf("%d",&a[i]);


    }
    printf("The elements in list are=\n");
    for(i=0;i<n;i++)
    {
        show(&a[i]);
    }


}

void show(int *a) 
{
    printf("%d\n",*a);
}