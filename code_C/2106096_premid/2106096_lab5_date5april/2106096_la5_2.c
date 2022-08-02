/*Author : Antarin Ghosal
Program : WAP to store max. 100 numbers into an array. Print all the elements
that are three digit even integers..*/


#include<stdio.h>

int main(){
    int arr[100],n,i;
    printf("Enter the amount of numbers we want to input : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }

    printf("\n");

    for(i=0;i<n;i++){
        printf("The Entered value was : %d \n",arr[i]);
    }

    printf("\n");

    printf("The EVEN integers are as follows : \n");
    for(i=0;i<=n;i++){
        if ((arr[i]<=999 && arr[i]>=100) && arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }

    return 0;
}