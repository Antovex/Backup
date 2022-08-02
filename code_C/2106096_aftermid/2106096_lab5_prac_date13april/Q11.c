/*
name:Antarin Ghosal
program:11.	Write a C program to count frequency of each element in an array.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,n,c=0,N,j,count,b[0],flag=0;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}
			printf("NUMBEr\tcount\n");
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
				flag=1;
		}
		if(flag==0)
		{
			c=0;
			for(j=0;j<n;j++)
				if(arr[i]==arr[j])
					c+=1;
			printf("%d\t%d\n",arr[i],c);
		}
	}
		
 	return 0;		
}
		
