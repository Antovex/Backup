/*
name:Antarin Ghosal
program:2.Write a C program to print all negative elements in an array.
DATE:24/04/22
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
		printf("\nNegeative element of array: ");
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
				printf("%d\t",a[i]);
		}
	return 0;
}

