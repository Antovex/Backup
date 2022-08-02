/*
Antarin Ghosal
LA7.3 WAP to test whether a number n is palindrome number or not.
*/

#include<stdio.h>

int pali(int x)
{
	int rem,rev,temp;
	temp=x;
	while(x!=0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	if(rev==temp)
		return 1;
	else
		return 0;
}

int main()
{
	
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(pali(n))
		printf("%d is palindrome",n);
	else
		printf("%d is not palndrome",n);
	
	return 0;
}
