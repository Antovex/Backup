
/*
Antarin Ghosal
LA7.5 WAP to generate all the prime numbers between 1 and n by using a user defined  
function (say isPRIME) to be used for prime number testing, where n is a value supplied by the user.
*/

#include<stdio.h>

int isPrime(int x)
{
	int flag=0,i;
	for(i=2;i<x;i++)
		if(x%i==0)
			flag=1;
	if(flag==1)
		return 0;
	else
		return 1;
}

int main()
{
	
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(isPrime(i))
			printf("%d  ",i);
	return 0;
}
