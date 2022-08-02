/*
name:Antarin Ghosal
15.	Write a C program to merge two array to third array.
DATE:25/04/22
*/

#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("Enter the value of N for array 1: ");
	scanf("%d",&n1);
	int arrA[n1];
	printf("Enter the value of N for array 2: ");
	scanf("%d",&n2);
	int arrB[n2];
	//for arr A
	for(i=0;i<n1;i++)
		{
			printf("Enter %d element of array1: ",i+1);
			scanf("%d",&arrA[i]);
		}
		printf("________________________________________\n");
	//for arrayB
	for(i=0;i<n2;i++)
		{
			printf("Enter %d element of array2: ",i+1);
			scanf("%d",&arrB[i]);
		}
		
	int arrC[n1+n2];	
	for(i=0;i<n1;i++)
		arrC[i]=arrA[i];
	int k=0;		
	for(i=n1;i<n1+n2;i++)
		arrC[i]=arrB[k++];
	
	printf("________________________________________\n");
	printf("ARRAY C:\n");	
	for(i=0;i<n1+n2;i++)
		printf("%d\t",arrC[i]);
		
		return 0;
	}
