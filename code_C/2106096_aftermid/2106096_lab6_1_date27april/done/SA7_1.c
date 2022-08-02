/*
Name : Antarin ghosal
SA7.1 WAP to find the length of a string with/without using library function for getting length of the string.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100];
	int len=0,i,sp=0;
	scanf("%[^\n]s",str);
	for(i=0;i<100;i++)
		if(str[i]!='\0')
		{
			if(str[i]!=' ')
			len+=1;
			if(str[i]==' ')
			sp+=1;
		}
		else
			break;
	printf("String: %s\n",str);
	printf("Lenght without white space: %d\n",len);
	printf("Lenght with white space: %d",(len+sp));
	return 0;
	}

