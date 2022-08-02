/*Author : Antarin Ghosal
Program :WAP to find out the sum of the secondary diagonal elements of a matrix.*/


#include<stdio.h>

int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;

    for(i=0;i<3;i++){
            sum+=arr1[i][3-i-1];
    }

    printf("%d",sum);

    return 0;
}