/*Author : Antarin Ghosal
Program : WAP to input any two integers distinct and display the greater of two integers.*/


#include<stdio.h>

int main(){
    int a,b,max;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    max=a;
    if (b>max)
        max = b;
    if (a==b){
        printf("\nEntered values are same");
        return 0;
    }

    printf("%d is maximum",max);
    return 0;
}