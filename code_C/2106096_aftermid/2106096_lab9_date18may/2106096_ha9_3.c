#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	int n;char ch[100],*str=ch;
	int vc=0,c=0,i;
	printf("Enter the string:");
	scanf("%[^\n]s",ch);
	
	for(i=0;i<strlen(ch);i++)
	{
		if(*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U'||*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u')
			vc++;
		else if(isalpha(*(str+i)))
				c++;
	}
	printf("VOWEL: %d\n",vc);
	printf("CONSONANT: %d\n",c);

return 0;
}


