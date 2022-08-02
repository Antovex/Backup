/*Author : Antarin Ghosal
Program : WAP to reads a sentence and prints the number of vowels and consonants*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i,l,vowels=0,consonants=0;
    printf("Enter the String : ");
    gets(str);

    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowels++;
        }
        else if(str[i] == ' '){
            continue;
        }
        else consonants++;
    }

    printf("The number of Vowels are : %d \n",vowels);
    printf("The number of consonants are : %d \n",consonants);

    return 0;
}