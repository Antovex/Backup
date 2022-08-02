/*Author : Antarin Ghosal
Program : WAP to display the greatest integer from 3 given numbers.*/


#include<stdio.h>

int main(){
    int a,b,c,max;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);

    max = a ;

    if (max<b)
        max = b;
    if (max<c) 
        max = c;

    printf("%d is maximum",max);
    
    return 0;
}