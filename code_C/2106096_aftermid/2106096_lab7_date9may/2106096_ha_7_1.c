/*Author : Antarin Ghosal
Program : WAP to test whether a number num (num is entered through keyboard) is a number in
the Fibonacci sequence or not.*/


#include<stdio.h>
#include<math.h>

int issq();
int isfib();

int main(){
    int n,res,temp;

    printf("Enter the number : ");
    scanf("%d",&n);

    res = isfib(n);

    if (res==1)
        printf("The number is a fibonacci number.");
    else printf("The number is not fibonacci.");

    return 0;
}

int issq(int n){
    int s = sqrt(n);

    if (s*s==n)
        return 1;
    else return 0;
}

int isfib(int num){
    if (issq(5*num*num + 4)==1 || issq(5*num*num - 4)==1){
        return 1;
    }
    else return 0;
}