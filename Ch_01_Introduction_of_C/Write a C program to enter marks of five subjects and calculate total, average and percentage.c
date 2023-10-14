//Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include<stdio.h>
#include<conio.h>
int main()
{
    float c,java, php,os,math,total,aveg,prt;
    printf(" Enter five sub marks ");
    printf("\n-----------------------------");
    printf("\n c laguage :");
    scanf("%f",&c);

    printf("\n java laguage :");
    scanf("%f",&java);

    printf("\n php laguage :");
    scanf("%f",&php);

    printf("\n operating system :");
    scanf("%f",&os);

    printf("\n mathmatical :");
    scanf("%f",&math);

    total = c+java+ php+ os+ math;
    printf("\n Total      = %f",total);
    aveg=total/5;
    printf("\n Average    = %f",aveg);
    prt= (total/500)*100;
    printf("\n Percentage = %f",prt);
    printf("\n----------------------------");

    return 0;

}

/*Enter five sub marks
-----------------------------
 c laguage :90

 java laguage :85

 php laguage :60

 operating system :70

 mathmatical :90

 Total      = 395.000000
 Average    = 79.000000
 Percentage = 79.000000
----------------------------
*/