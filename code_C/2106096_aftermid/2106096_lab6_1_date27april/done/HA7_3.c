/*
Name : Antarin ghosal
HA7.3 WAP to print a given string in an alphabetical order
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
int i,j;
char str[10];
//input
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
	
//cal and out
	for(i=65;i<=90;i++)
	for(j=0;j<len;j++)
		if(toupper(str[j])==(char)i)
			printf("%c",(char)i);

return 0;
}


