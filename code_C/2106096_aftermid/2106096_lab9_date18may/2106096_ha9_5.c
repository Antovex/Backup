#include <stdio.h>
#include <string.h>
void swap(char* str)
{

	char c=0;
	int length=0,i=0;
	length = strlen(str);

	if (length % 2 == 0) 
	{
		for(i=0;i<length;i+=2) 
		{
			c=str[i];
			str[i]=str[i+1];
			str[i+1] =c;
		}
		printf("%s\n", str);
	}
	else {

		printf("NA\n");
	}
}

int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]s",str);

	swap(str);

	return 0;
}

