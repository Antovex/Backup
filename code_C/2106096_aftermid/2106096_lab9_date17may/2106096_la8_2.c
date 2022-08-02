/*
Antarin Ghosal
LA8.2 WAP to compute the sum of all elements in an array using pointer.
*/
#include <stdio.h>

int main () 
	{
	int N,i,sum=0;
	printf("Enter number of element in the array:");
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++)
	{
		printf("ENter arr element [%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int *p=&arr[0];
	for(i=0;i<N;i++)
	{
		sum+=*p;
		p=p+1;
	}
	printf("sum of the array: %d",sum);
   return 0;
}
