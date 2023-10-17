#include<stdio.h>
#include<conio.h>
//Write a c program to check whether charcter is alphabet or not.
void main()
{
    char ch;
    printf("Enter th chareter:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("\nchareter is alphabet");
    }
    else
    {
        printf("\nchareter is not alphabeet");
    }

    getch();
}
/* output:
Enter th chareter:dgh
chareter is alphabet
*/
