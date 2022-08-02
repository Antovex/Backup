/*Author : Antarin Ghosal
Program : WAP to Calculate perimeter of circle.
*/



#include <stdio.h>
int main()
{
    double r,per;

    printf("Enter the value of Radius : ");
    scanf("%lf",&r);               //This takes the input as the value of radius and stores it in tthe location of 'r'.

    per = 2*3.14159*r;            //This formula finds the perimeter for the given value of radius.

    printf("The Area for the given radius %.2lf of circle is : %.3lf",r,per);

    return 0;
}