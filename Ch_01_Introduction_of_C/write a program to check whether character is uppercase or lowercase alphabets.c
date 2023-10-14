#include<stdio.h>
#include<conio.h>
//write a program to check whether character is uppercase or lowercase alphabets.
void main()
{
    char ch;
    printf("Enter a value\n",ch);
    scanf("%c",&ch);

    ch>='A' && ch>='Z' ?
    printf("It is uppercase alphabets"):
        ch>='a' && ch<='z' ?
        printf("It is lowercase alphabets"):
            printf("It is not character ");

    getch();
}
