/*Author : Antarin Ghosal
Program : WAP to display all odd and even numbers.*/


#include<stdio.h>

int main(){
    int stn,endn,i;

    printf("Enter the range : ");
    scanf("%d%d",&stn,&endn);

    printf("\nAll even numbers are : \n");

    for (i=stn;i<endn;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }

    printf("\nAll odd numbers are : \n");

    for (i=stn;i<endn;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }


    return 0;
}