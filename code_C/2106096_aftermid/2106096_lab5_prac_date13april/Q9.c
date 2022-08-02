
/*
name:Antarin Ghosal
program:9.	Write a C program to insert an element in an array.
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
	
	printf("Enter the number to be inserted: ");
	scanf("%d",&N);
	printf("Enter the postion to be insted: ");
	scanf("%d",&pos);
	printf("PREVIUS ARRAY:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
	for(i=n;i>=pos;i--)
			a[i]=a[i-1];
			
	a[pos-1]=N;
	printf("\nUpdated list:\n");
		
	for(i=0;i<=n;i++)
		printf("%d\t",a[i]);
	return 0;
}

