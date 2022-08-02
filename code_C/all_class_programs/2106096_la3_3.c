/*Author : Antarin Ghosal
Program : WAP to test whether a number entered through keyboard is ODD or EVEN.*/


#include<stdio.h>

int main(){
    int n,temp;
    printf("Enter a number : ");
    scanf("%d",&n);

    temp=n%2;

    if (temp==1)
        printf("The Given number %d is Odd",n);
    else
        printf("The Given number %d is Even",n);

    return 0;
}