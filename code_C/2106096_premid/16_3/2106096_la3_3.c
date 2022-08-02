/*Author : Antarin Ghosal
Program : WAP to display the given number is even or odd*/


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