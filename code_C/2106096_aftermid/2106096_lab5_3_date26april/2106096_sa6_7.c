/*Author : Antarin Ghosal
Program : WAP to find the Trace(sum of the diagonal element) of a given mxn matrix.*/


#include<stdio.h>

int main(){
int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;

    for(i=0;i<3;i++){
            sum+=arr1[i][i];
    }

    printf("%d",sum);

    return 0;
}