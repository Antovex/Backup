/*
name:Antarin Ghosal
program:5.	Write a C program to find second largest element in an array.
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
		int max=a[0],smax=a[1];
		
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			{
				smax=max;
				max=a[i];
			}
				
		}
		
		printf("\nSECOND MAX: %d",smax);;
	return 0;
}

