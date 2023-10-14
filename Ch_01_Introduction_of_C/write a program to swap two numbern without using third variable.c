#include<stdio.h>
#include<conio.h>
//write a program to swap two numbern without using third variable.
void main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    printf("\nA=%d and B=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nSwapping is A=%d and B=%d",a,b);

    getch();
}
/*
output:
Enter a and b
10
11
A=10 and B=11
Swapping is A=11 and B=10
*/
