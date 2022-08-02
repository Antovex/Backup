/*Author : Antarin Ghosal
Program : WAP to count number of digits of a positive integer n by using recursion.*/


#include<stdio.h>

int numcount();

int main(){
    int num;
    printf("Enter a positive integer : ");
    scanf("%d",&num);

    printf("The number of digits are : %d",numcount(num));

    return 0;
}

int numcount(int num){
    if (num==1)
        return 1;
    return 1 + numcount(num%10);
}