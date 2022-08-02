/*Author : Antarin Ghosal
Program : WAP to multiply two matrices and display it.*/


#include<stdio.h>

int main(){
    int arr1[10][10],arr2[10][10],mularr[10][10],m1,n1,m2,n2,i,j,k,sum=0;

    printf("Enter the number of rows of 1st matrix : ");
    scanf("%d",&m1);
    printf("Enter the number of coloumns of 1st matrix : ");
    scanf("%d",&n1);

    printf("Enter the number of rows of 1st matrix : ");
    scanf("%d",&m2);
    printf("Enter the number of coloumns of 1st matrix : ");
    scanf("%d",&n2);

    if(n1!=m2){
        printf("Can't multiply !!");
        return 0;
    }

    printf("Enter the elements for 1st matrix.");
    //takes input for 1st matrix
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("Enter the [%d][%d] element : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements for 2nd matrix.");
    //takes input for 2nd matrix
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            printf("Enter the [%d][%d] element : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            for(k=0;k<n1;k++){
                mularr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",mularr[i][j]);
        }
        printf("\n");
    }


    return 0;
}