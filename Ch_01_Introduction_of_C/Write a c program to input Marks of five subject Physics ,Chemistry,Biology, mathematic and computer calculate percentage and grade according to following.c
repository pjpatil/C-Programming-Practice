
#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
Write a c program to input Marks of five subject Physics ,Chemistry,Biology, mathematic and computer calculate percentage and grade according to following:
percentage>=90%:Grade A
percentage>=80%:Grade B
percentage>=70%:Grade C
percentage>=60%:Grade D
percentage>=50%:Grade E
percentage>=40%:Grade F  */
int main()

{
    float phy,chem,bio,math,comp,ptr,total;
    printf("\nEnter the Physics ,Chemistry,Biology, mathematic and computer : ");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);

    total = phy+chem+bio+math +comp ;
    printf("\nTotol marks:%f\n",total);  //Total marks..

    ptr =(total*100)/500;               //Percentage...
    printf("\npercentage is :%f\n",ptr);

    (ptr>=90)? printf("Grade A"):
        (ptr>=80)? printf("Grade B"):
            (ptr>=70)? printf("Grade C"):
                (ptr>=60)? printf("Grade D"):
                    (ptr>=50)? printf("Grade E"):
                        printf("Grade F");


    return 0;

}
/* output:
Enter the Physics ,Chemistry,Biology, mathematic and computer : 90 80 57 49 60

Totol marks:336.000000

percentage is :67.199997
Grade D
*/



