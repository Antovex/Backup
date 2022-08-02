/*
name:Antarin Ghosal
17.	Write a C program to put even and odd elements of array in two separate array.
DATE:25/04/22
*/

#include<stdio.h>
int main()
{
	int i,n,temp;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];
	int arrE[n],arrO[n];
	
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}
	int E=0,O=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arrE[E]=arr[i];
			E=E+1;
		}
		else
		{
			arrO[O]=arr[i];
			O=O+1;
		}
	}
	printf("EVEN ARRAY:\n");
	for(i=0;i<E;i++)
		printf("%d\t",arrE[i]);

	printf("\nODD array:\n");
		for(i=0;i<O;i++)
		printf("%d\t",arrO[i]);
		
	return 0;
}
