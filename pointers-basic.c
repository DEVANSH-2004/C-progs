#include <stdio.h>

int main()
{
    int i=3;
    int *j;  //this tells that varibale j stores the address of variable i. here j is called a pointer variable
    printf("Address of i is= %u\n",&i);  // &i returns the address where the variable i is stored and %u refers to format specifier of the unsigned integer , instead of %u ,%d will also work as %d is for both signde and unsigned integers and memory locations re always positive signed only
    printf("Value of i is = %d\n",i); 
    printf("Value of variable i=%d\n",*(&i));  // * returns the value of the variable storred at &i location   *(&i)=i
    j=&i; //j stores the memory address of i variaable in this way
    printf("The address of variable i stored in j variable is =%u\n",j);
    printf("The memory address of j variable itself is=%u\n",&j);
    

}