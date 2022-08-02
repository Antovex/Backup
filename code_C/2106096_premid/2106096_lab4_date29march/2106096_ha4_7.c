/*Author : Antarin Ghosal
Program : WAP to convert a decimal number into its equivalent binary number.*/


#include<stdio.h>

int main(){
    int n;
    long int bin = 0;
    int rem, i = 1;

    printf("Enter a decimal number : ");
    scanf("%d",&n);

    while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
    }

    printf("It's equivalent binary form is : %ld",bin);
}