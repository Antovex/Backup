/*Author: ARATRIKA DAS
Date: 29.03.2022
Program:  WAP to check whether an integer number is a Armstrong number or not!.
*/

#include<stdio.h>
int main()
{
	int n,a=0,b,temp,arm;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		temp=n%10;
		a=temp*temp*temp;
		printf("%d\n",a);
		arm+=a;
		printf("%d\n",arm);
		n=n/10;
	}
	if(arm==n)
		printf("\nThe number is an ARMSTRONG NUMBER");
	else
		printf("\nThe number is NOT an ARMSTRONG NUMBER");
	return 0;
}
