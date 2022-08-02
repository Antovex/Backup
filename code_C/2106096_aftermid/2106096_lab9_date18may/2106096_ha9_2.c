#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,max,*b,N;
	int k=0;
	printf("enter number of elment of the array: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	
	printf("Enter the cyclic switch: ");
	scanf("%d",&N);
	if(a==NULL)
	{
		printf("MEMORY ALLOCATION UNSUCCESFULL");
		exit(0);
	}
	else
	{
		printf("\ENTER THE ARRAY ELEMENT ONE by one\n:");
		for(i=0;i<n;i++)
		{	
			printf("Enter element number [%d]: ",i+1);
			scanf("%d",(a+i));
		}
	k=N;	
	for(i=0;i<n-N;i++)
		*(b+i)=*(a+k++);
	k=0;
	for(i=n-N;i<n;i++)
		*(b+i)=*(a+k++);
		
	printf("AFTER LEFT CYCLIC SWITCH OF VALUE %d\n",N);
	
	for(i=0;i<n;i++)
		printf("%d\t",*(b+i));
			
	}
	

	return 0;
}
