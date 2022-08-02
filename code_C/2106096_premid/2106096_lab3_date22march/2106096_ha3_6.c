/*Author : Antarin Ghosal
Program : WAP to find profit or loss*/


#include<stdio.h>

int main(){
    int sp,cp,profit,loss;
    printf("Enter selling price : ");
    scanf("%d",&sp);
    printf("Enter cost price : ");
    scanf("%d",&cp);

    if (sp>cp){
        profit=sp-cp;
        printf("\nProfit : %d\n",profit);
    }
    else {
        loss=cp-sp;
        printf("\nLoss : %d\n",loss);
    }


    return 0;
}