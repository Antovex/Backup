
#include <stdio.h>    
int main()    
{    int N,i,j,n;
    printf("Enter the value of N(total number of value to be input in the array): ");
	scanf("%d",&N);
	int arr[N];

	for(i=0;i<N;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}    
        
    printf("enter the left rotate value(n):");
    scanf("%d",&n);
    printf("Original array: \n");    
    for(i=0;i<N;i++) 
	{     
        printf("%d ",arr[i]);     
    }      
        
    for(i=0;i<n;i++)
	{    
        int j,first;    
        first=arr[0];    
        for(j=0;j<N-1;j++)
            arr[j] = arr[j+1];   
        arr[j] = first;    
    }    
    printf("\n");    
    printf("Array after left rotation: \n");    
    for(i=0;i<N;i++)    
        printf("%d ", arr[i]);    
        
    return 0;   
}    
