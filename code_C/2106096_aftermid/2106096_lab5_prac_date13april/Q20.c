/*
name:Antarin Ghosal
20.	Write a C program to sort even and odd elements of array separately.
DATE:25/04/22
*/
#include<stdio.h>
int main()
{
	int i,j,n,temp,pos;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];
	int arrE[n],arrO[n];
	
	for(i=0;i<n;i++)
		{
			printf("Enter %d element of array: ",i+1);
			scanf("%d",&arr[i]);
		}
	int E=0,O=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arrE[E]=arr[i];
			E=E+1;
		}
		else
		{
			arrO[O]=arr[i];
			O=O+1;
		}
	}
	//for even array
		for(i=0;i<(E-1);i++)
		{
			pos=i;
			for(j=i+1;j<O;j++)
			{
				if (arrE[pos]>arrE[j])
					pos=j;
			}
			if(pos!=i)
			{
				temp=arrE[i];
				arrE[i]=arrE[pos];
				arrE[pos]=temp;
			}
		}
	//for odd array
			for(i=0;i<(O-1);i++)
		{
			pos=i;
			for(j=i+1;j<O;j++)
			{
				if (arrO[pos]>arrO[j])
					pos=j;
			}
			if(pos!=i)
			{
				temp=arrO[i];
				arrO[i]=arrO[pos];
				arrO[pos]=temp;
			}
		}
		
	
	printf("\nsorted even array:\n");
	for(i=0;i<E;i++)
		printf("%d\t",arrE[i]);
	printf("\nsorted odd array:\n");
	for(i=0;i<O;i++)
		printf("%d\t",arrO[i]);
		
	return 0;
}
