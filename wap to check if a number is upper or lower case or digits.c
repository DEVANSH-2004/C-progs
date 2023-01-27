//wap to check if a number is upper or lower case or digits

#include <stdio.h>

int main()
{
  char ch;
  int lc=0,dc=0,uc=0;
  printf("Enter a upper case character or lower case character or number .\nEnter * to stop \n");
  scanf("%c",&ch);
  do{
    if(ch>=65 && ch<=90){
        uc++;
        printf("The character entered is upper case character");
    }
    else if(ch>=97 && ch<=122){
        lc++;
        printf("The character entered is upper case character");
    }
    else if(ch>=47 && ch<=58){
        dc++;
        printf("The character entered is digit");
    }
    printf("\nEnter a upper case character or lower case character or number .\nEnter * to stop \n");
    scanf("%c",&ch);
  }while(ch!='*');
  printf("The numer of characters in upper case = %d \n",uc);
  printf("The numer of characters in lower case = %d \n",lc);
  printf("The numer of characters in digits = %d \n",dc);
}