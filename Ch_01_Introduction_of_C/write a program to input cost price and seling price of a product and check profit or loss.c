#include<stdio.h>
#include<conio.h>
//write a program to input cost price and seling price of a product and check profit or loss.
void main()
{
    float cp,sp,profit,loss;//cp=cost price,sp=seling price
    printf("Entr you are seling price:\n");
    scanf("%f",&sp);
    printf("Entr you are cost price:\n");
    scanf("%f",&cp);
    sp-cp && cp<=sp ?
    printf("It is Profit..."):
        cp-sp && cp>=sp?
        printf("It is loss..."):
            printf("it is a not loss");

    getch();
}
/*
output:
Entr you are seling price:
12
Entr you are cost price:
10
It is Profit...
*/
