
/*
Antarin Ghosal
LA8.3 WAP to display values in reverse order from an integer array using pointer.
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
	int *p=&arr[N-1];
	for(i=N-1;i>=0;i--)
	{
		printf("%d ",*p);
		p=p-1;
	}
   return 0;
}
