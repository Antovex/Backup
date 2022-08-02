/*Author : Antarin Ghosal
Program : WAP to check whether a given matrix is symmetric or not.*/


#include<stdio.h>

int main(){
    int arr1[10][10],i,j,m,n,arr2[10][10],flag;

    printf("Enter the number of rows : ");
    scanf("%d",&m);

    printf("Enter the number of coloumns : ");
    scanf("%d",&n);

    //takes input
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the [%d][%d] element : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    //finds transpose
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr2[j][i]=arr1[i][j];
        }
    }

    //checks for symmetric
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr1[i][j]==arr2[i][j])
                flag=1;
            else flag=0;
        }
    }

    if(flag==1){
        printf("The given matrix is Symmetric !!");
    }
    else{
        printf("The given matrix is NOT symmetric.");
    }

    return 0;
}