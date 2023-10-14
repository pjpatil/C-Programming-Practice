
//Write a c program to check whether number is even or odd.
#include<stdio.h>
void main()
{
    int num;
    printf("\n Enter the number :");
    scanf("%d",&num);

    (num%2==0)? printf("Number is even "):
        printf(" Number is odd ");

    getch();

}

 /* Output: Enter the number :7
            Number is odd
*/