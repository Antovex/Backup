/*Author : Antarin Ghosal
Program : WAP to check whether a given matrix is orthogonal or not.*/


#include<stdio.h>

int main(){
    int arr1[10][10],i,j,m,n,arr2[10][10],mularr[10][10],iarr[10][10],flag;

    printf("Enter the number of rows : ");
    scanf("%d",&m);

    printf("Enter the number of coloumns : ");
    scanf("%d",&n);

    //creating identity matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j)
                iarr[i][i]=1;
            else iarr[i][j]=0;
        }
    }


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
            arr2[i][j]=arr1[j][i];
        }
    }

    //multiplying A and At.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mularr[i][j]=arr1[j][i]*arr2[i][j];
        }
    }

    //checking if A*At=I or not
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mularr[i][j]==iarr[i][j])
                flag=0;
            else flag=1;
        }
    }

    if(flag==1){
        printf("The given matrix is Orthogonal !!");
    }
    else{
        printf("The given matrix is NOT orthogonal.");
    }

    return 0;
}