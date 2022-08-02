/*Author : Antarin Ghosal
Program :WAP swap the contents of two variables by using a single statement for swap in C.*/


#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the numbers to be swaped : ");
    scanf("%d %d",&a,&b);

    a = a+b , b = a-b , a = a-b;

    printf("The swaped numbers are : %d & %d",a,b);
    return 0;
}