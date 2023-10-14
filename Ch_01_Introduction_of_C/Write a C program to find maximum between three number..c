
//Write a C program to find maximum between three number.
#include<stdio.h>
void main()
{
     int x,y,z;
     printf(" \nEnter the number fist X: ");
     scanf("%d",&x);
     printf(" \nEnter the number second Y: ");
     scanf("%d",&y);
     printf(" \nEnter the number second z: ");
     scanf("%d",&z);

     x>y && x>z?
     printf("\n X is greater "):
         y>x && y>z?
         printf("\n Y is greater "):
             printf("\n Z is greater ");

     getch();
}

      /* output:
         Enter the number fist X: 10
         Enter the number second Y: 20
         Enter the number second z: 30
         Z is greater    */

