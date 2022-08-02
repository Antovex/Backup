/*Author : Antarin Ghosal
Program : WAP to display as 1 3 7 15 31........n*/


#include<stdio.h>

int main(){
    int n,i=0,temp=0,preterm=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(temp<n){
        i=preterm;
        temp=(2*i)+1;
        printf("\n %d \n",temp);
        preterm=temp;
        i++;
    }

    return 0;
}