/*Author : Antarin Ghosal
Program : WAP to perform linear search on a array for a search key.*/


#include<stdio.h>

int main(){
    int i,j,arr[30],n,key;
    printf("Enter the amount of numbers we want to enter : ");
    scanf("%d",&n);

    printf("Enter the numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number you want to find : ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("The number %d is found at index %d",key,i);
        }
    }

    return 0;
}