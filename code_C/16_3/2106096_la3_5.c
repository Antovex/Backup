/*Author : Antarin Ghosal
Program : WAP to display roots of quadratic equation.*/


#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,root1,root2;

    printf("Enter the 'a' value : ");
    scanf("%f",&a);
    printf("Enter the 'b' value : ");
    scanf("%f",&b);
    printf("Enter the 'c' value : ");
    scanf("%f",&c);

    c=(b*b)-(4*a*c);             
    D=sqrt(c);                    //Here the value of determinant is stored.
    root1=(-b+D)/(2*a);           //1st root value.
    root2=(-b-D)/(2*a);           //2nd root value.


    printf("The roots are %.2f and %.2f ",root1,root2);

    return 0;
}