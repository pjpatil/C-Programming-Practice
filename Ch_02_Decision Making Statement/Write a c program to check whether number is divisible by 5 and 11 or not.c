#include<stdio.h>
#include<conio.h>
// Write a c program to check whether number is divisible by 5 and 11 or not.
void main()
{
    int no;
    printf(" Enter the number : ");
    scanf("\n %d",&no);

    if((no%5==0 )||(no%11==0))
    {
        printf("\n Number is complitly divisible 5 and 11");

    }
    else
    {
        printf(" Number is not divide");
    }

    getch();
}
/*
output:
Enter the number : 20
 Number is complitly divisible 5 and 11

Enter the number : 4
 Number is not divide
 */
/*
