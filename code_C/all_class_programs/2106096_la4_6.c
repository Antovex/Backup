/*Author : Antarin Ghosal
Program : WAP to display series of form 3 5 7 11 13 17.......n .*/


#include<stdio.h>

int main(){
    int n,i,t;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("\n 3 \n\n 5 \n");

    for (i=1;i<=n;i++){
        t=(2*i)+1;
        if ((t%3!=0)&&(t%5!=0)){
            printf("\n %d \n",t);
        }
    }
    return 0;
}