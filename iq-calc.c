#include <stdio.h>

int main()
{
    float x,y,i;
    printf("x       y       i  \n");
    printf("___    ___      ___\n");
    x=5.5;

    for(y=1;y<=6;y++)
    {
        i=2+(y+0.5*x);
        printf("%0.2f   %0.2f   %0.2f  \n",x,y,i);
        x=x+0.5;

    }
}