/*
Name: Antarin ghosal
WAP to create a new data type DATE with the help of structure and typedef. Write the
following user defined functions for the date manipulations.
a) To return next date
b) To return next month.
c) To return next year.
d) to add few days in a date.
e) To add few months in a date.
f) To add few years in a date.
g) To return month name from a date.
h) To display date in various format such as DD-MM-YYYY, DD.MM.YY etc.*/
#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
}d;
int main()
{
    d date;
    int n,x;
    printf("Enter Date :~");
    scanf("%i %i %i",&date.day,&date.month,&date.year);
    printf("Enter Command Number For Function:~\n");
    printf("1 for Next Day\n");
    printf("2 for Next Month\n");
    printf("3 for Next Year\n");
    printf("4 for Add Date\n");
    printf("5 for Add Month\n");
    printf("6 for Add Year\n");
    printf("7 for Different Styles\n");
    printf("Enetr Function key:~");
    scanf("%i",&n);
    switch (n)
    {
    case 1:
        printf("Next Date Is %i/%i/%i",date.day+1,date.month,date.year);
        break;
    case 2:
        printf("Next Month Is %i",date.month+1);
        break;
    case 3:
        printf("Next Year Is %i",date.year+1);
        break;
    case 4:
        printf("Enter Date To Add:~");
        scanf("%i",&x);
        printf("Resultant Date Is %i",date.year+x);
        break;
    case 5:
        printf("Enter Month To Add:~");
        scanf("%i",&x);
        printf("Resultant Month Is %i",date.month+x);
        break;
    case 6:
        printf("Enter Year To Add:~");
        scanf("%i",&x);
        printf("Resultant Year Is %i",date.year+x);
        break;
    case 7:
        printf("Date Is %i/%i/%i\n",date.day+1,date.month,date.year);
        printf("Date Is %i.%i.%i\n",date.day+1,date.month,date.year);
        printf("Date Is %i-%i-%i\n",date.day+1,date.month,date.year);
        break;
    default:
        printf("Please Enter Valid Number");
        break;
    }
}