/*
Name : Antarin ghosal
LA7.1 WAP to extract the last character of each word of a given string.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100],str2[100];int len=0,i;
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
	sprintf(str,"%s ",str);
	len=strlen(str);
	
	for(i=0;i<len;i++)
		if(str[i]==' ')
			printf("%c ",str[i-1]);
		
	return 0;
	}

