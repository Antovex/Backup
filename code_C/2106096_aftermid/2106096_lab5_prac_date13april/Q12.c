/*
name:Antarin Ghosal
program:12.	Write a C program to print all unique elements in the array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,c,j;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&a[i]);
		}
	printf("UNIQUE NUMBER:\n");
	for(i=0;i<n;i++)
		{
			c=0;
			for(j=0;j<n;j++)
				if(a[i]==a[j])
					c++;
			if(c==1)
				printf("%d\n",a[i]);
		}
		
	return 0;
}	
