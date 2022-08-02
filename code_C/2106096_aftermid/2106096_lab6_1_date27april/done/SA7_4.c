/*
Name : Antarin ghosal
SA7.4 WAP to find the reverse of a string with/without using library function.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100];int len=0,i;
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
	
	len=strlen(str);
	int r=len-1;
	char str2[len];
	for(i=0;i<len,r>=0;i++)
		str2[i]=str[r--];
		
	printf("STRING: %s",str);
	printf("\nREVERSE: %s",str2);
	return 0;
	}

