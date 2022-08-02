/*Author : Antarin Ghosal
Program : WAP to sort an array using Pointer.*/


#include<stdio.h>

void bubblesort();

int main(){
    int arr[6]={6,3,7,1,9,2};
    
    bubblesort(arr,6);

    return 0;
}

void bubblesort(int *p,int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(*(p+j)<*(p+j+1)){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }

    printf("The sorted array is : ");
    for(i=0;i<6;i++){
        printf("%d,",p[i]);
    }
}