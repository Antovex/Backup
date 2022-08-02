/*Author : Antarin Ghosal
Program : WAP to print odd and even numbers in a array.*/


#include<stdio.h>

int main(){
    int n,arr[30],i,j;
    printf("Enter the amount of numbers we want to enter : ");
    scanf("%d",&n);
    
    printf("Enter the numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nAll EVEN numbers are as follows : \n");
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("\n%d",arr[i]);
        }
    }

    printf("\n\nAll ODD numbers are as follows : \n");
    for(i=0;i<n;i++){
        if(arr[i]%2==1){
            printf("\n%d",arr[i]);
        }
    }

    return 0;
}