#include<stdio.h>
#include<conio.h>
//Q1.Write a c program to check whether number is positive or negative.
void main()
{
    int no;
    printf(" Enter the number : ");
    scanf("\n %d",&no);

    if(no>=0)
    {
        printf(" number is Positive ");
    }
    else
    {
        printf(" number is negetive");
    }

    getch();
}
/*output:
 Enter the number : -1
 number is negetive

 Enter the number : 10
 number is Positive
*/
