/*
Antarin Ghosal
LA7.4 WAP to calculate x^y by writing a function(say POWER) for it.
*/

#include<stdio.h>

int POWER(int x,int y)
{
	int pow=1,i;
	for(i=1;i<=y;i++)
		pow*=x;
		
	return pow;
}

int main()
{
	
	int n,m;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("enter power:");
	scanf("%d",&m);
	printf("%d power %d: %d",n,m,POWER(n,m));
	
	
	return 0;
}
