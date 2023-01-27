#include <stdio.h>

int main(){
    int y,q;
    char g;
    printf("Enter Gender , years of service and Qualifications - G-0 ,PG-1");
    scanf("%c %d %d",&g,&y,&q); //give spaces while giving input also
    
    if(g=='m'&& y>=10 && q==1)
      printf("The salary award is 9898");
}