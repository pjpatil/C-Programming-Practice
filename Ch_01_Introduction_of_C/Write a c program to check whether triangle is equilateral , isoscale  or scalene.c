// Write a c program to check whether triangle is equilateral , isoscale  or scalene.
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("\n Enter the side1,side2 and side3 :");
    scanf("%f%f%f",&side1,&side2,&side3);

    (side1==side2 || side1==side3 || side2==side3)?
    printf("Tringle is isoscale "):
        printf(" Triangle is scalene");

    return 0;


}
/* Output :
 Enter the side1,side2 and side3 :5 4 6
 Triangle is scalene
*/