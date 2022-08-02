/*
Name : Antarin ghosal
SA7.3 WAP to compare two strings without using library function for comparison operation.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	int i=0;
	char str1[100];
	char str2[100];
	printf("Enter 1st string: ");
	gets(str1);
	printf("Enter 2nd string: ");
	gets(str2);

	while(str1[i]!='\0'&&str2[i]!='\0')
		{
			if(str1[i]==str2[i])
			{
				i++;
				continue;
			}
			else
				break;
		}
	printf("%d",str1[i]-str2[i]);
	return 0;
	}

