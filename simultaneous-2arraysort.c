#include <stdio.h>

int main()
{
    int n,i,j,t;
    printf("Enter the number of students=\n");
    scanf("%d",&n);
    int a[n],x[n];
    for(i=0;i<n;i++)
    {
        a[i]=i;
        printf("Enter marks of student roll no. %d =\n",i+1);
        scanf("%d",&x[i]);

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j]<x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    printf("Roll No.\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\n",(i+1),x[i]);
    }
}