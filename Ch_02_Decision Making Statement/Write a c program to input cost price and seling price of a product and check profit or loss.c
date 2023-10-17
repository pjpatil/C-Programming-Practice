#include<stdio.h>
#include<conio.h>

//Write a c program to input cost price and seling price of a product and check profit or loss.

int main()
{
    int cp,sp;
    printf("\n\n Enter the cost price :  ");
    scanf("%d",&cp);
    printf("\n Enter the selling price  :  ");
    scanf("%d",&sp);

    if(cp<sp)
    {
        printf("\n*** Profit ***");
    }

    else
    {
        printf("\n** loss **");
    }

    return 0;

}
/* output:

 Enter the cost price :  40

 Enter the selling price  :  50

*** Profit ***
*/
