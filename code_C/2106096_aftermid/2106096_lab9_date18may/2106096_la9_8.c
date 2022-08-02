/*Author : Antarin Ghosal
Program : WAP to find the largest element stored in an array of n elements by using dynamic memory
allocation*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*a,i,s=0,max;

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

    for(i=0;i<n;i++){
        if(a[i]>a[i-1]){
            max=a[i];
        }
        else max=a[i-1];
    }

    printf("The largest element is : %d",max);

    return 0;
}