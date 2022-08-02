/*
name:Antarin Ghosal
program:3.	Write a C program to find sum of all array elements.
DATE:24/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
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
			sum+=a[i];
		}
		
		printf("\nSUM of all array element : %d",sum);
	return 0;
}

