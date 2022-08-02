/*Author : Antarin Ghosal
Program : WAP to swap two integer numbers without using third variable*/


#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the numbers to be swaped : ");
    scanf("%d%d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The swaped numbers are : %d & %d",a,b);

    return 0;
}