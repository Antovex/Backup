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
        
    printf("enter the right rotate value(n):");
    scanf("%d",&n);
    printf("Original array: \n");    
    for (i=0;i<N;i++) 
	{
        printf("%d ", arr[i]);     
    }     
        
 
    for(i=0;i<n;i++)
	{    
        int j,last;    
        last=arr[N-1];    
        for(j=N-1;j>0;j--)
            arr[j]=arr[j-1];     
        arr[0]=last;    
    }    
        
    printf("\n");    
          
    printf("Array after right rotation: \n");    
    for(i =0; i<N; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    

