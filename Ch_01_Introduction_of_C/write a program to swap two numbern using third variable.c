#include<stdio.h>
#include<conio.h>
//write a program to swap two numbern using third variable.
void main()
{
    int a,b,temp;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    printf("\nA=%d and B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nA=%d and B=%d",a,b);

    getch();
}
/*
output:
Enter a and b
12 10
A=12 and B=10
A=10 and B=12
*/
