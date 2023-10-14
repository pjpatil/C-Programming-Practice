// Write a c program check whether number is positive , negative or zero.

#include<stdio.h>
#include<conio.h>
int main()
{
    int num ;
    printf(" Enter the number ");
    scanf("%d",&num);
    (num>=0)? printf(" Positive Number"):
        (num==0)? printf(" Negative Number ");
    printf("number is Zero ");


  return 0;
}
