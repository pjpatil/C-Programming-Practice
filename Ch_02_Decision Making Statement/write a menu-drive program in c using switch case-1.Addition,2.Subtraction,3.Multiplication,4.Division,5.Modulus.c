#include<stdio.h>
#include<conio.h>
#include<math.h>
//write a menu-drive program in c using switch case-1.Addition,2.Subtraction,3.Multiplication,4.Division,5.Modulus
void main()
{
    float add,sub,multi,div,modu;
    int num1,num2,choice;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulus");

    printf("\n Enter Your choice : ");
    scanf("%d",&choice);
    printf("\n Enter the number first : ");
    scanf("%d",&num1);
    printf("\n Enter the number second : ");
    scanf("%d",&num2);
    switch(choice)
    {
    case 1:
        add = num1+num2;
        printf("Additionis =%f",add);
        break ;

    case 2:
        sub = num1-num2;
        printf("Subtraction=%f",sub);
        break ;

    case 3:
        multi = num1*num2;
        printf("Multiplication=%f",multi);
        break ;

    case 4:
        div = num1/num2;
        printf("Division=%f",div);
        break ;

    case 5:
        modu=num1%num2;
        printf("Modulus=%f",modu);
        break ;
    case 6:
        choice<6;
        printf(" invalide inpute , correct choice!");
        break;
    }
getch();
}
/*output:
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Modulus
 Enter Your choice : 1
 Enter the number first : 12
 Enter the number second : 13
Additionis =25.000000

*/
