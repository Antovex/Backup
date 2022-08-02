/*Author : Antarin Ghosal
Program : WAP to find out the sum of the elements stored in a matrix.*/


#include<stdio.h>

int main(){
    int i,j,arr[3][3]={1,2,3,4,5,6,7,8,9},sum=0;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }

    printf("%d",sum);

    return 0;
}