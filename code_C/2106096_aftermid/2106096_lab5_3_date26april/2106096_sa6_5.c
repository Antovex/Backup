/*Author : Antarin Ghosal
Program : WAP to add two matrices and display it.*/


#include<stdio.h>

int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int sumarr[3][3],i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sumarr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sumarr[i][j]);
        }
    printf("\n");
    }

    return 0;
}