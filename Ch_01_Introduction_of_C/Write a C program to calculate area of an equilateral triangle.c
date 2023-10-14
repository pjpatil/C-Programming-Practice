//Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
    float s,area;
    printf(" Enter the side of Triangle : ");
    scanf("%f",&s);

    area = ( 1.73 * s*s) / 4 ;
    printf("\n Area of Equilateral Triangle : %f",area);
    return 0;

}
/*  Enter the side of Triangle : 5

    Area of Equilateral Triangle : 10.812500
*/