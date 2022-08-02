/*Author : Antarin Ghosal
Program : WAP to operate on 2 numbers.*/


#include<stdio.h>

int main(){
    float a,b,res;
    char op='a';
    printf("Enter the operator (+,-,*,/,etc) : ");
    scanf("%c",&op);
    printf("Enter the 1st number : ");
    scanf("%f",&a);
    printf("Enter the 2nd number : ");
    scanf("%f",&b);

    switch(op)
    {
        case '+':
        {
        res=a+b;
        break;
        }
        case '-':
        {
            res=a-b;
            break;
        }
        case '*':
        {
            res=a*b;
            break;
        }
        case '/':
        {
            res=a/b;
            break;
        }
        case '%':
        {
            res=(int)a%(int)b;
            break;
        }
        default:
        break;
    }

    printf("\nThe result is : %.2f \n",res);

    return 0;
}