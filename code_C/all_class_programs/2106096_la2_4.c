/*Author : Antarin Ghosal
Program : WAP to Calculate area of Triangle.
*/



#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,area,s;

    printf("Enter the value of 1st side of triangle : ");
    scanf("%lf",&a);

    printf("Enter the value of 2nd side of triangle : ");
    scanf("%lf",&b);

    printf("Enter the value of 3rd side of traingle : ");
    scanf("%lf",&c);

    s= ((a+b+c)/2);
    area = (sqrt((s*(s-a)*(s-b)*(s-c)))); //this is the formula to calculate the area of triangle.

    printf("The given values for Triangle are %.3lf, %.3lf & %.3lf \n",a,b,c);
    printf("The Area for the given values are : %.3lf \n",area);

    return 0;
}