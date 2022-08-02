/*Author : Antarin Ghosal
Program : WAP to display a calculator.*/


#include<stdio.h>

int main(){
    float a,b,res=0;
    char op;
    printf("\n------------------------Calculator-------------------------------\n");
    printf("Enter the operator(+,-,*,/) : ");
    scanf("%c",&op);

    printf("Enter the 1st number : ");
    scanf("%f",&a);
    printf("Enter the 2nd number : ");
    scanf("%f",&b);

    if (op == '+')
        res = a+b;
    else if (op == '-'){
        if (a>b)
            res = a-b;
        else
            res = b-a;
    }
    else if (op == '*')
        res = a*b;
    else if (op == '/')
        res = a/b;
    else{
        printf("\nThe entered operator or the input value is incorrect.\n");
        return 0;
    }

    printf("The entered operator was %c and the calculated value is %.2f\n",op,res);

    return 0;
}