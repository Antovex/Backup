/*
Name : Antarin ghosal
LA7.2 Write a program to concatenate two strings without using any library function.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100];
	char str2[100];
	char buffer[200];
	printf("Enter 1st string: ");
	gets(str);
	printf("Enter 2nd string: ");
	gets(str2);
	sprintf(buffer,"%s %s",str,str2);
	printf("CONCATENATED STRING: %s",buffer);
	return 0;
	}

