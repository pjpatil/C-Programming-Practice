#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
Write a c program to input basic salary of an employee and calculate its Gross salary according to following:
Basic salary<=1000:HRA=20%,DA=80%
Basic salary<=2000:HRA=25%,DA=90%
Basic salary>=2000:HRA=30%,DA=95%
*/
int main()

{
    float basic_salary,gross,DA,HRA;
    printf("\nEnter the Basic Salary : ");
    scanf("%f",&basic_salary);

    (basic_salary<=1000)? printf("HRA=%f \t DA=%f\n",HRA=basic_salary*0.2,DA=basic_salary*0.8):
        (basic_salary<=2000)? printf("HRA=%f \t DA=%f\n",HRA=basic_salary*0.2,DA=basic_salary*0.8):
            (basic_salary>=2000)? printf("HRA=%f \t DA=%f\n",HRA=basic_salary*0.2,DA=basic_salary*0.8):
                printf("\n");

    gross=basic_salary +HRA +DA;
    printf("Gross salary %f",gross);

    return 0;
}
/* output:
Enter the Basic Salary : 2032
HRA=406.399994   DA=1625.599976
Gross salary 4064.000000

*/
