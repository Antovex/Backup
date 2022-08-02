/*
Name : Antarin ghosal
LA7.5 WAP to reads a sentence and prints frequency of each of the vowels and total count of Consonants.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
int i,vc=0,c=0;char ch;
char str[100];

	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
    for(i=0;i<len;i++)
    {
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vc++;
	 	else if(isalpha(str[i]))
			c+=1;
		else
			continue;
	}
	
	
	printf("NUMBER OF VOWEL: %d\n",vc);
	printf("NUMBER OF CONSUNENT: %d",c);
	

return 0;
}

