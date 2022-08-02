/*Author : Antarin Ghosal
Program : WAP to convert the temprature from celsius to Fahrenheit scale.
*/

#include <stdio.h>
int main()
{
    double tc,tf;

    printf("Enter the Celsius temperature : ");
    scanf("%lf",&tc);

    tf = (tc*1.8)+32;  //this is the formula for converting the celsius to Fahrenheit.

    printf("The Temperature in Fahrenheit is %.2lf",tf);

    return 0;
}