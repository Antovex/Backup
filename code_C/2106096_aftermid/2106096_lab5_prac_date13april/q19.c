/*
name:Antarin Ghosal
19.	Write a C program to sort array elements in ascending or descending order.
DATE:25/04/22
*/

#include<stdio.h>
int main()
	{
	int n,i,j,pos,temp;
	
	printf("ENter the number of element in the aray: ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
		{
			printf("ENter the array element %d: ",i+1);
			scanf("%d",&arr[i]);
		}
		
		//selection sort
		for(i=0;i<(n-1);i++)
		{
			pos=i;
			for(j=i+1;j<n;j++)
			{
				if (arr[pos]>arr[j])
					pos=j;
			}
			if(pos!=i)
			{
				temp=arr[i];
				arr[i]=arr[pos];
				arr[pos]=temp;
			}
		}

printf("sorted array : \n");
for(i=0;i<n;i++)
printf("%d  ",arr[i]);
	return 0;
	}
