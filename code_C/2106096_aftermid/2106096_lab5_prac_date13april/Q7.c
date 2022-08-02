
/*
name:Antarin Ghosal
program: 7.	Write a C program to count total number of negative elements in an array.
DATE:24/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,C=0;
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
			if(a[i]<0)
				C+=1;
		}
			printf("\nNO. of Negeative element in array: %d",C);
	return 0;
}

