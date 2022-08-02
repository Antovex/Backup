/*
Name : Antarin ghosal
HA7.2 WAP to take a sentence as input and reverse every word of the sentence.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
int i,j=0;
char str[100];
//input
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
	sprintf(str,"%s ",str);
	int k=0,len=strlen(str);
while(str[i]!='\0')
{
	if(str[i]==32)
	{
		for(j=i-1;j>=k;j--)
			printf("%c",str[j]);
			printf(" ");
			k=i+1;
	}
	i++;
}

return 0;
}
