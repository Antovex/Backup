/*Author : Antarin Ghosal
Program : WAP to calculate x^y by writing a function(say POWER) for it.*/


#include<stdio.h>

int power();

int main(){
    int n,p,result;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&p);

    result=power(n,p);

    printf("Answer : %d",result);

    return 0;
}

int power(int num,int p){
    int i,temp;

    for (i=0;i<p;i++){
        temp*=num;
    }

    return temp;
}