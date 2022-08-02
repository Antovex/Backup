/*
name:Antarin Ghosal
14.	Write a C program to delete all duplicate elements from an array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,c=0,N,j,k=0,count,arrB[10],flag=0,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
				flag=1;
		}
		if(flag==0)
		{
			c=0;
			for(j=0;j<n;j++)
				if(arr[i]==arr[j])
					c+=1;
			if(c==1)
				arrB[k++]=arr[i];
		}
		
	}
	printf("Array without any duplicate element:\n");
	for(i=0;i<k;i++)
		printf("%d\t",arrB[i]);
 	return 0;		
}
	
