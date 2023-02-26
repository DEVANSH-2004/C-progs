#include <stdio.h>
void display(int *,int);

int main()
{
    int n;
    printf("Enter the number of elements in array=\n");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter elements of array=\n");
        scanf("%d",&a[i]);
    }
    display(&a[0],n);


}

void display(int *x,int y)
{
    printf("The elements in the array are=\n");
    int i;
    for(i=0;i<y;i++)
    {
        printf("%d\n",*x);
        x++;

    }
}