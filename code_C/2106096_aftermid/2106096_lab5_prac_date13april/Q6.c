/*
name:Antarin Ghosal
program:6.	Write a C program to count total number of even and odd elements in an array.
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
		int OC=0,EC=0;
				
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
				EC+=1;
				
			if(a[i]%2!=0)
				OC+=1;
		}
		
		printf("\nEVEN COUNT: %d",EC);
		printf( "\nODD COUNT: %d",OC);
	return 0;
}

