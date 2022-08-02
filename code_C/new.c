#include<stdio.h>

int main()
{
    int i,j,n=10,temp;
    int arr[10]={10,1,3,7,6,9,8,2,4,5};
    
    for(i=0;i<=(n);i++){
        for(j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                temp     =arr[j];
                arr[j]   =arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

}