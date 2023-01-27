//to check the type of traingle

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 sides of traingles \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a)
         printf("The traingle is equilateral");
    else if(a==b || b==c || c==a)
         printf("The traingle is isosceles");
    else if(a!=b && b!=c && c!=a)
         printf("The traingle is scalene");
         
}