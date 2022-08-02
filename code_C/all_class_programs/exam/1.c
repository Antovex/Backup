/*Author : Antarin Ghosal
Program : WAP to display the pattern for given number of rows.*/


#include<stdio.h>

int main(){
    int i,j,num,k,p;
    printf("Enter the number : ");
    scanf("%d",&num);

    int space=num-1;

    for (p=0;p<num;p++){
        for (i=0;i<space;i++){
            printf(" ");
            space;
        }
        for (j=1;j<((2*num)-1);j++){
            if (j>0){
                printf("%d",j);
            }
        }
    printf("\n");
    }

    return 0;
}