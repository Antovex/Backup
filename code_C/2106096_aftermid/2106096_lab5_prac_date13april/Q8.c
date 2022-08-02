
/*
name:Antarin Ghosal
program:8.	Write a C program to copy all elements from an array to another array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&a[i]);
		}
	
	for(i=0;i<n;i++)
		b[i]=a[i];		
		
	printf("copied to array B: ");
		
	for(i=0;i<n;i++)
		printf("%d\t",b[i]);
	
	return 0;
}

