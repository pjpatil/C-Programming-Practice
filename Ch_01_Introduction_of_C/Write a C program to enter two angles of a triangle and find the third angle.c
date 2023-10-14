
// Write a C program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf(" Enter the first angles of triangle : ");
    scanf("%d",&a);
    printf(" Enter the second angles of triangle : ");
    scanf("%d",&b);
    c= 180-(a+b);
    printf("\nThird angle of triangle : %d", c);
    return 0;

}
/*Output:
   Enter the first angles of triangle : 60
   Enter the second angles of triangle : 30

   Third angle of triangle : 90
*/