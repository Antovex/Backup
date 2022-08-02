/*Author : Antarin Ghosal
Program : WAP to display max between 2 numbers using switch case.*/


#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    c=b>a;
    switch (c){
        case 1:
            printf("\n%d is greater than %d \n",b,a);
            break;
        case 0:
            printf("\n%d is greater than %d \n",a,b);
            break;
        default:
            break;
    }
    
    return 0;
}