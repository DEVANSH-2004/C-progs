#include <stdio.h>

int main()
{
    int n,m;
    float s=0;
    printf("Enter the number of units consumed by user=\n");
    scanf("%d",&n);
    m=n/50;
    switch(m)
    {
        case 0:
        s=0.50*n;
        printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
        break;
        case 1:
        case 2:
        if(n==50){
            s=0.50*n;
        printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
        }
        else{
            s=0.75*n+100;
            printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);

        }
        break;
        case 3:
        case 4:
        if(n==150){
            s=0.75*n+100;
        printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
        }
        else{
            s=1.25*n+150;
            printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
        }
        break;
        case 5:
        s=1.50*n+250;
        printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
        break;
        default:
        s=1.50*n+250;
        printf("The electricity bill for %d units is= Rs %0.2f\n ",n,s);
    }






    }



