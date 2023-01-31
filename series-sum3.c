#include<stdio.h>
#include<math.h>
void main(){
    int x,sign=1;
    long fact=1;
    float sum=0;
    printf("enter the value of x: ");
    scanf("%d",&x);
    for(int i=1;i<=30;i+=2){
        for(int j=1;j<=i;j++){
            fact*=i;

        }
        sum+=(sign*pow(x,i))/fact;
        sign*=-1;

    }
    printf("sum=%d",sum);

}