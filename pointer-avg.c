#include <stdio.h>
void avg(int,int,int,float*,float*);

int main()
{
    int a,b,c;
    float aveg,per;
    printf("Enter marks in 3 subjects=\n");
    scanf("%d %d %d",&a,&b,&c);
    avg(a,b,c,&aveg,&per);
    printf("Average=%0.2f\n",aveg);
    printf("Percentage=%0.2f\n",per);
}

void avg(int x,int y,int z,float *a,float *b)
{
    *a=(x+y+z)/3;
    *b=((x+y+z)/300.0)*100;
}

