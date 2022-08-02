/*
Name : Antarin ghosal
LA7.4 Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels, consonants present in a in a string.
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() 
{

  char str[150];
  int vowels=0, consonant=0, digit=0, space=0,i;

  vowels = consonant = digit = space = 0;

  printf("Enter a str of string: ");
  fgets(str, sizeof(str), stdin);

  for (i=0;str[i]!='\0';i++) 
  {
    str[i]=tolower(str[i]);

    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') 
      	vowels++;
    else if((str[i]>='a'&&str[i]<='z'))
     		consonant++;
    else if(str[i]>='0'&&str[i]<='9') 
      	digit++;
    else if(str[i]==' ') 
      	space++;
  }
  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}


