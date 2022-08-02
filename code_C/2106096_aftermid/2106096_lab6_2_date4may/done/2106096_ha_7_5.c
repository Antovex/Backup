/*
Name : Antarin ghosal
HA7.5 WAP to replace all occurrences of a substring in a given string with a new one.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100],str2[100];
	int k,ch,b,j;
	
	printf("ENTER THE STRING:");
	scanf("%[^\n]s",str);
	
	printf("ENTER THE SUBSTRING TO REPLACE:");
	scanf(" %[^\n]s",str1);
	
	printf("ENTER THE SUBSTRING TO REPLACE WITH:");
	scanf(" %[^\n]s",str2);
	
	int len=strlen(str),len1=strlen(str1),len2=strlen(str2),i=0;
	
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
		if(b==1)
			{
				printf("%s",str2);
				i=i+(len1-1);
			}
		else
			printf("%c",str[i]);
			i=i+1;
	}
	return 0;
}
