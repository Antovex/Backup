/*
name:Antarin Ghosal
program:10.	Write a C program to delete an element from an array at specified position.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,N,pos,temp;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&a[i]);
		}
	
	printf("Enter the number to be deleted ");
	scanf("%d",&N);
	printf("Enter the secific postion: ");
	scanf("%d",&pos);
	if(a[pos-1]==N)
	{
		printf("PREVIUS ARRAY:\n");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);
		
		for(i=pos-1;i<n-1;i++)
			a[i]=a[i+1];
			
		printf("\nUpdated list:\n");
	
		for(i=0;i<n-1;i++)
			printf("%d\t",a[i]);
	}
	else
		printf("Element not present at enter postion");
	
	return 0;
}

