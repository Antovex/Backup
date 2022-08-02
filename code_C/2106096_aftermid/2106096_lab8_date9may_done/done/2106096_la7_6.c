/*
Antarin Ghosal
LA7.6 A Fibonacci sequence is defined as follows: the first and second terms in the 
sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the
 sequence (Fi=Fi-1+Fi-2). WAP to generate the first n terms of the sequence by writing a 
 suitable user defined function (say fib) to be used to get nth term Fibonacci value.
*/

#include<stdio.h>

int fib(int x)
{
	int a=-1,b=1,c=a+b,i;
	for(i=1;i<=x;i++)
		{
			a=b;
			b=c;
			c=a+b;
		}
	return c;
}

int main()
{
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d ",fib(i));
	return 0;
}


