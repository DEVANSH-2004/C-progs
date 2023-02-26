#include <stdio.h>

float pw( float,float);

int main()
{
    float n,p;
    printf("Enter number=\n");
    scanf("%f",&n);
    printf("Enter power=\n");
    scanf("%f",&p);
    printf("%f",pw(n,p));
}

float pw(float n,float p){
    float i,z;
    float r=1;
    if(p>=1){
    for(i=1;i<=p;i++)
    {
        r=r*n;
    }
    }
    else if(p<0)
    {
        z=1/p;
        for(i=1;i<=p;i++)
        {
            r=1/(r*n);

        }
        

    }
    else{
        for(i=1;i<=p;i++)
        {
            r=(r+n/r)/2.0;
        }
    }
    return(r);
}