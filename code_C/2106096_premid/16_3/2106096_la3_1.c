/*Author : Antarin Ghosal
Program : WAP to find greater number between 2 numbers.*/


#include<stdio.h>

int main(){
    int a,b,max;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);

    max=a;          //assuming a is maximum.
    if (b>max)
        max = b;    //if b is max then max variable is updated.
    if (a==b){
        printf("\nEntered values are same");
        return 0;
    }

    printf("%d is maximum",max);
    return 0;
}