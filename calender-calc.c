#include <stdio.h>

int main()
{
    int y,a=2001,l,r,t,k; //told that intial day was monday
    printf("Enter current year\n");
    scanf("%d",&y);
    y=y-a; //as new year is yet to start,so exclude that
    l=y/4;
    r=y-l;
    t=r*365+l*366;
    k=t%7;
    printf("The year %d was started with ",y+a);
    if(k==0)
      printf("Monday");
    else if(k==1)
      printf("Tuesday");
    else if(k==2)
      printf("Wednesay");
    else if(k==3)
      printf("Thursday");
    else if(k==4)
      printf("Friday");
    else if(k==5)
      printf("Saturday");
    else if(k==6)
      printf("Sunday");


}