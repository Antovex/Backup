/*Author : Antarin Ghosal
Program : WAP to find first and second largest in an array.*/


#include<stdio.h>

int main(){
    int i,j,arr[30],n,large1,large2;
    printf("Enter the amount of numbers we want to enter : ");
    scanf("%d",&n);

    if (n>30){
        printf("Too many numbers !!");
        return 0;
    }

    printf("Enter the numbers : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    large1=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>large1)
        {
            large1=arr[i];
            j=i;
        }
    }

    arr[j]=0;

    large2=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>large2)
            large2=arr[i];
    }

    printf("The first largest value is : %d\n",large1);
    printf("The second largest value is : %d\n",large2);

    return 0;
}