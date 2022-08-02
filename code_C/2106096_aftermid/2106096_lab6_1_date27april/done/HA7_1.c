/*
Name : Antarin ghosal
program : HA7.1 WAP to capitalize first character of each word of a string entered through keyboard.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[30];int len=0,i;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	len=strlen(str);
	char str2[len];
	str2[0]=toupper(str[0]);
	for(i=1;i<len;i++)
		if(str[i-1]==' ')
			str2[i]=toupper(str[i]);
		else
			str2[i]=str[i];
			
	printf("%s",str2);
		return 0;
	}

