#include <stdio.h>

int main()
{
    int a,x=0,y=0,z=0;
    char ch;
    
    do{
        printf("Enter a number=\n");
        scanf("%d",&a);
        
        if(a>0)
          x++;
        else if(a==0)
          y++;
        else
           z++;
        printf("Want to enter more numbers? y/n=\n");
        scanf("%c",&ch);
    }while(ch!='n');
    printf("The numbers positive=%d",x);
}