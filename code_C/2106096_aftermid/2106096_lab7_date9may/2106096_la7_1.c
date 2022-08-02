/*Author : Antarin Ghosal
Program :WAP to swap the values of two variables by using a suitable user defined function */


#include<stdio.h>

void swap();

int main(){
    int a,b;

    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    swap(a,b);

    return 0;
}

void swap(int num1,int num2){
    int temp;

    temp=num1;
    num1=num2;
    num2=temp;

    printf("The swaped values are : %d and %d",num1,num2);
}