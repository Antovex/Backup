/*
name:Antarin Ghosal
program:1.	Write a C program to read and print elements of array.
*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}

