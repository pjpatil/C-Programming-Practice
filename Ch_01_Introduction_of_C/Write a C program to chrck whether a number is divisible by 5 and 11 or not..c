//Write a C program to chrck whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
void main()
{
   int n ;
   printf(" Enter the number ");
   scanf("%d",&n);

    n%5==0 || n%11==0 ?
    printf(" number is complite divisible "):
        printf("number id not divisible ");

    getch();
}
/* output : Enter the number 15
            number is complite divisible
*/
