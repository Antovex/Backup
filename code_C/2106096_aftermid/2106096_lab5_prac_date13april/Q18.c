/*
name:Antarin Ghosal
18.	Write a C program to search an element in an array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
	{
	int key,i,N,j,flag=0;
	printf("ENter the number of element in the aray: ");
	scanf("%d",&N);
	
	int arr[N];
	
	for(i=0;i<N;i++)
		{
			printf("ENter the array element %d: ",i+1);
			scanf("%d",&arr[i]);
		}
		
	printf("Enter the element to find: ");
	scanf("%d",&key);
	for(i=0;i<N;i++)
	{
		if(arr[i]==key)
			{
			printf("%d found at array element[%d]",key,i);
			flag=1;
			break;
			}
	}
	if(flag==0)
		printf("%d is not present in the array",key);
		

return 0;
	}
