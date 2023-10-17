#include<stdio.h>
#include<conio.h>

//Write a c program to check whether number is even or odd.
void main()
{
    int no;
    printf(" Enter the number : ");
    scanf("\n %d",&no);
    if(no%2==0)
    {
        printf("\n Number is Even ");
    }
    else
    {
        printf("\n Number is Odd ");
    }

    getch();
}

/*output:
Enter the number : 19
 Number is Odd

Enter the number : 8
 Number is Even
 */
