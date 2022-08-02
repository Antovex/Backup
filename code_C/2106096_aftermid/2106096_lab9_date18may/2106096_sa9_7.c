/*Author : Antarin Ghosal
Program : WAP to store n elements in an array using dynamic memory allocation and print the elements
using pointer.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*a,i,s=0;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    if(a==NULL){
        printf("Unsuccessful !!");
        exit(0);
    }

    printf("Enter the array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered string is : ");
    while(*a<=n)
        printf("%d",*a++);

    return 0;
}