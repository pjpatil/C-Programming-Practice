#include<stdio.h>
#include<conio.h>
//write a program to swap two numbern using bitwise operater.
void main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    printf("\nA=%d and B=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nSwapping is A=%d and B=%d",a,b);

    getch();
}
/*
output:
Enter a and b
13
14
A=13 and B=14
Swapping is A=14 and B=13
*/
