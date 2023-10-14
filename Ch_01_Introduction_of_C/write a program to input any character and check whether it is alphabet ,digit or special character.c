#include<stdio.h>
#include<conio.h>
//write a program to input any character and check whether it is alphabet ,digit or special character.
void main()
{
    char ch;
    printf("Enter a value\n",ch);
    scanf("%c",&ch);
    ch>='a' && ch<='z' || ch>='A' &&ch>='Z'?
    printf("it is a alphabate"):
        ch>='0'&&ch<='9'?
        printf("It is a digit"):
            printf("It is a special character");

    getch();
}
