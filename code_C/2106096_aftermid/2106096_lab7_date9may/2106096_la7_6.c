/*Author : Antarin Ghosal
Program : WAP to generate the first n terms of the sequence by writing a 
suitable user defined function (say fib) to be used to get nth term Fibonacci value.*/


#include<stdio.h>

int fib();

int main(){
    int n,result;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    result=fib(n);

    printf("The %d term of fibonacci series is : %d",n,result);

    return 0;
}

int fib(int num){
    int f1=0,f2=1,i,temp=1;

    for (i = 3; i <= num; ++i) {
        f1 = f2;
        f2 = temp;
        temp = f1 + f2;
    }

    return temp;
}