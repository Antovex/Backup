/*Author : Antarin Ghosal
Program : WAP to input 10 integers into an array of size 10. Print all elements.*/


#include<stdio.h>

int main(){
    int i,arr[10];

    for(i=0;i<10;i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n");


    for(i=0;i<10;i++){
        printf("The Entered number is %d \n",arr[i]);
    }

    return 0;
}