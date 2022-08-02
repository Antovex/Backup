/*
Antarin Ghosal
HA7.4 WAP to find out the sum of n elements of an integer array a[] by using recursion.
*/

#include<stdio.h>

void sumOfArray(int a[],int n,int sum)
{
	if(n>=0)
	{
		sum+=(a[n]);
	sumOfArray(a,n-1,sum);
	}	
	else
	printf("Sum:%d",sum);
}


int main()
{
	int i,n,sum=0;
	printf("ENTER NUMBER OF ARRay elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		sumOfArray(a,n-1,sum);
	return 0;
	
}
