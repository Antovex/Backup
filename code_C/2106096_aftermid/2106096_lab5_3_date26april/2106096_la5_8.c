/*Author : Antarin Ghosal
Program : WAP to find out the transpose of a given matrix.*/


#include<stdio.h>

int main(){
    int i,j,arr2[3][3];
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr2[i][j]=arr1[j][i];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}