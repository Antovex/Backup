/*Author : Antarin Ghosal
Program : WAP to perform binary search on a array for a search key.*/


#include<stdio.h>

int main(){
    int i,j,arr[30],n,key,temp;
    printf("Enter the amount of numbers we want to enter : ");
    scanf("%d",&n);

    printf("Enter the numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number you want to find : ");
    scanf("%d",&key);

    temp=n/2;

    if (key <= arr[temp]){
        for(i=temp;i>=0;i--){
            if(key==arr[i])
            printf("The number %d is found at index %d\n",key,i);
        }
    }

    else if (key > arr[temp]) {
        for (i=temp;i<n;i++){
            if(key==arr[i])
            printf("The number %d is found at index %d\n",key,i);
        }
    }

    return 0;
}