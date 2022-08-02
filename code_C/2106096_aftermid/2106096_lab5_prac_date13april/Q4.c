/*
name:Antarin Ghosal
program:4. Write a C program to find maximum and minimum element in an array.
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
		int max=a[0],min=a[0];
		
		for(i=0;i<n;i++)
		{
			if(max<a[i])
				max=a[i];
				
			if(min>a[i])
				min=a[i];
		}
		
		printf("\nMAX: %d",max);
		printf("\nMIN: %d",min);
	return 0;
}

