/*Author : Antarin Ghosal
Program : WAP to test whether a number n is palindrome number or not*/


#include<stdio.h>

int palin();

int main(){
    int n,flag=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    flag=palin(n);

    if (flag==0){
        printf("The Entered number is palindrome.");
    }
    else printf("The entered number is not a palindrome.");

    return 0;
}


int palin(int num){
    int temp = num,r=0,sum;

    while(num!=0)    
        {    
        r=num%10;    
        sum=(sum*10)+r;    
        num/=10;    
    }

    if(temp==sum) return 0;
    else return 1;
}