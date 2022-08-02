/*
Name : Antarin ghosal
LA7.7 Develop a user defined function and test them in the main program for the following standard function:
int MatchAny(char s1[], char s2[]) :It takes two string arguments and it returns  1 if s2 is substring of s1, returns 0 if both s1 and s2 are equal strings, 
 otherwise, returns -1. Do not use the standard library functions.
*/


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100],str2[100];
	int k,ch,b=0,j;
	
	printf("ENTER THE STRING(s1):");
	scanf("%[^\n]s",str);
	
	printf("ENTER THE SUBSTRING:(s2):");
	scanf(" %[^\n]s",str1);
	
	int len=strlen(str),len1=strlen(str1),i=0;
	
	if(len!=len1)
	{
		while(str[i]!='\0')
		{
		b=0;
		if(str[i]==str1[0])
				{
					k=0,ch=0,b=0;
					for(j=i;j<i+len1;j++)
						if(str1[k++]==str[j])
							ch++;
					if(ch==len1)
						b=1;
				}
			i=i+1;
		}
	if(b==1)
		printf("1");	
	else
		printf("-1");
	}
	
	
	
	else if(len==len1)
	{
		for(i=0;i<len;i++)
			if(str[i]!=str1[i])
				b=1;
		if(b=1)
			printf("0");
		else
			printf("-1");
	}
	else
		printf("-1");
		
	return 0;
}
