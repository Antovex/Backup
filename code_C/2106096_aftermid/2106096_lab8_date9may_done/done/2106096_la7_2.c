/*
Antarin Ghosal
LA7.2 WAP to find out ncr factor by using a user defined function for factorial (say fact).
*/

#include<stdio.h>

int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact*=i;
		return fact;
}


int main()
{
	int n,r;
	printf("Enter the value of n and r: ");
	scanf("%d %d",&n,&r);
	int nCr=fact(n)/(fact(r)*fact(n-r));
	printf("\nnCr:%d",nCr);
	return 0;
}
