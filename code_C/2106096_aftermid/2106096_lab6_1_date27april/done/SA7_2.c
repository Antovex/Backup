/*
Name : Antarin ghosal
SA7.2 WAP to copy one string into other with/without using a library function for copy operation.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100];
	char str2[100];
	printf("Enter THE string: ");
	scanf("%[^\n]s",str);	
	int i;
//	sprintf(str2,"%s",str);
//	strcpy(str2,str)
	for(i=0;i<strlen(str);i++)
		str2[i]=str[i];
		str2[strlen(str)]='\0';
		
	printf("COPIED STRING:    %s",str2);
	
	return 0;
	}

