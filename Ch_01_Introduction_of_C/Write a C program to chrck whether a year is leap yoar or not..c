//Write a C program to chrck whether a year is leap yoar or not.

void main()
{
    int year;
    printf("Enter the Year ");
    scanf("%d",&year);

    year%4==0 && year%100!=0 ?
    printf(" Year is Leep......"):
        printf(" Year is not leep ....");
}


/* Output : Enter the Year 2016
            Year is Leep......
*/
