/*
name:Antarin Ghosal
16.	Write a C program to find reverse of an array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,temp;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}
	
	printf("array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<=n/2;i++)
		{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		}
	printf("ReVERSE of the array:\n");
	
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	
	return 0;
}
