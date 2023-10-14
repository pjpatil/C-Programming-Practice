//Write a C program to enter P, T, R and calculate Simple Interest.


#include<stdio.h>
#include<conio.h>
int main()
{
    float P,T,R,si;
    printf("\n Engter a P:");
    scanf("%f",&P);

    printf("\n Engter a T:");
    scanf("%f",&T);

    printf("\n Engter a R:");
    scanf("%f",&R);

    si= (P*R*T)/100;
    printf("\n Simple intress = %f",si);

    return 0;

}
/*
 Engter a P:100

 Engter a T:90

 Engter a R:3

 Simple intress = 270.000000
*/