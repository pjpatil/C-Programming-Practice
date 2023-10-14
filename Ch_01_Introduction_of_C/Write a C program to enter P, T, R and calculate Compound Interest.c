// Write a C program to enter P, T, R and calculate Compound Interest.

#include<stdio.h>
#include<conio.h>
int main()
{
    float P,T,R,si;
    printf("\n Engter a P :");
    scanf("%f",&P);

    printf("\n Engter a T:");
    scanf("%f",&T);

    printf("\n Engter a R:");
    scanf("%f",&R);

    ci=P*(Pow(1+R/100)T);
    printf("\n compound intress = %f",ci);
    return 0;

}
