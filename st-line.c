// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int x1,y1,x2,y2,x3,y3;
//     float a,b,c;
//     printf("x1 y1\n");
//     scanf("%d %d",&x1,&y1);
//     printf("x2 y2\n");
//     scanf("%d %d",&x2,&y2);
//     printf("x3 y3\n");
//     scanf("%d %d",&x3,&y3);
//     a=sqrt((pow((x1-x2),2))+((pow((y1-y2),2))));
//     b=sqrt((pow((x2-x3),2))+(pow((y2-y3),2)));
//     c=sqrt((pow((x1-x3),2))+(pow((y1-y3),2)));
//     if((a+b)==c)
//      printf("st. line");
//     else 
//      printf("not st. line");
// }


#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float ab,bc,ac;
    printf("enter (x1,y1) :");
    scanf("%d %d ",&x1,&y1);
    printf("enter (x2,y2) :");
    scanf("%d %d ",&x2,&y2);
    printf("enter (x3,y3) :");
    scanf("%d %d ",&x3,&y3);
   ab=sqrt(pow((x1-x2),2) + pow((y1-y2),2));
   bc=sqrt(pow((x3-x2),2)+ pow((y3-y2),2));
   ac=sqrt(pow((x3-x1),2) +pow((y3-y1),2));
   printf("ab=%f\tbc=%f\tac=%f",ab,bc,ac);

    if (ac==(bc+ab))
    printf("the given points will form a straight line");
    
    else
    printf("the given points will not form a straight line");

}