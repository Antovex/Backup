/*
Name : Antarin ghosal
LA7.3 WAP to check whether a string entered through keyboard is palindrome or not.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
	{
	char str[100],str2[100];int len=0,i;
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
	
	len=strlen(str);
	int r=len-1;
	
	for(i=0;i<len;i++)
		str2[i]=str[r--];
		
	short int flag=0;
	for(i=0;i<len;i++)
		if(str[i]!=str2[i])
			flag=1;
			
	if(flag==1)
		printf("%s is not palindrome",str);
	else
		printf("%s is palindrome",str);
	return 0;
	}

