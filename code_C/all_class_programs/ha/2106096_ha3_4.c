/*Author : Antarin Ghosal
Program : WAP to check whather the number is odd or even using switch.*/


#include<stdio.h>

int main(){
    int a,temp;

    printf("Enter a number : ");
    scanf("%d",&a);

    temp=a%2;
    switch(temp)
    {
        case 0:
            printf("\nThe entered number is EVEN\n");
            break;
        case 1:
            printf("\nThe entered number is ODD\n");
            break;
    }

    return 0;
}