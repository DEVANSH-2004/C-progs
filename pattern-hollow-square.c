#include <stdio.h>

int  main(){
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j==1 || i==1 || j==10 || i==10){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
            
        
        }
        printf("\n");
    }

}