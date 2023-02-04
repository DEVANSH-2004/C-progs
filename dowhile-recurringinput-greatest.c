// #include <stdio.h>

// int main()
// {
//     int n,largest,smallest;
//     char ch;
//     printf("Enter a number,enter 6969 to stop=\n");
//     scanf("%d",&n);
//     largest=n;
//     smallest=n;
//     do{
//         if(largest>n){
//             largest=n;
//         }
//         else if(smallest<n){
//             smallest=n;
//         }
        
//         printf("Want to continue y/n=\n");
//         fflush(stdin);
//         scanf("%c",&ch);
//         printf("Enter a number=\n");
//         scanf("%d",&n);
//     }while(ch!=6969);
//     printf("The largest number is=%d",largest);
//     printf("The smallest number is=%d",smallest);

// }

#include <stdio.h>

int main()
{
    int n,largest,smallest;
    // char ch;
    printf("Enter a number,enter 9999 to stop=\n");
    scanf("%d",&n);
    largest=n;
    smallest=n;
    do{
        if(largest>n){
            largest=n;
        }
        else if(smallest<n){
            smallest=n;
        }
        
        // printf("Want to continue y/n=\n");
        // fflush(stdin);
        // scanf("%c",&ch);
        printf("Enter a number=\n");
        scanf("%d",&n);
    }while(n!=9999);
    printf("The largest number is=%d",largest);
    printf("The smallest number is=%d",smallest);

}