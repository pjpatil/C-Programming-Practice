// Write a C program to enter base and height of a triangle and find its area.
#include<stdio.h>
#include<conio.h>
void main()
{
    float b,h,area;
    printf(" \n Enetr the value of base : ");
    scanf("%f",&b);
    printf(" \n Enetr the value of height : ");
    scanf("%f",&h);
    area = h*b/2 ;

    printf("\n Area of triangle : %f", area);
    getch();
}
/*Output:
 Enetr the value of base : 6

 Enetr the value of height : 8

 Area of triangle : 24.000000
*/