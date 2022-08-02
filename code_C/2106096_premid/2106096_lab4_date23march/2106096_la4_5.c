/*Author : Antarin Ghosal
Program : WAP to display a series of form 1 1 2 3 5 8 13.........n .*/


#include<stdio.h>

int main(){
    int n,i,d1=1,d2=1,temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (d1=1;d1<n;i++){
        printf("\n %d \n",d1);
        temp=d1+d2;
        d1=d2;
        d2=temp;
    }
    printf("");

    return 0;
}