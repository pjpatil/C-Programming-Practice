//Write a c program to check whether triangle is valid or not.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf(" Enter the A,B and C : ");
    scanf("%d %d %d",&a,&b,&c);

    (a+b >c && b+c>a && c+a>b)?
    printf("Triangle is valid"):
        printf("Triangle is not valid");
  getch();
}
