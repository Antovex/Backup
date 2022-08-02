/*Author : Antarin Ghosal
Program : WAP to subtract a number from another number and display the result.
*/

#include <stdio.h>
int main()
{
    double num1,num2,sub;

    printf("Enter the 1st Number : ");
    scanf("%lf",&num1);

    printf("Enter the 1st Number : ");
    scanf("%lf",&num2);

    sub=num1-num2;    //This Formula subtracts the 2 numbers 

    printf("The Subtractions of the given numbers %.2lf & %.2lf is : %.2lf",num1,num2,sub);

    return 0;
}