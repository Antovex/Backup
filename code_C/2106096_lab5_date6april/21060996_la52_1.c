/*Author : Antarin Ghosal
Program : WAP to print fibonacci series using arrays.*/


#include<stdio.h>

int main(){
    int arr[30],n,i;
    printf("Enter the number of elements we want to print : ");
    scanf("%d",&n);

    if(n>30){
        printf("Too many numbers !!");
        return 0;
    }

    printf("The Requested Elements are : \n0 \n1 \n");

    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d\n",arr[i]);
    }

    return 0;
}