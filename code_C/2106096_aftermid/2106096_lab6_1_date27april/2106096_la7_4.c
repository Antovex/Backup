/*Author : Antarin Ghosal
Program : Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels,
consonants present in a in a string.*/


#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hello world !!";
    int charac=0,alpha=0,tabs=0,newline=0,words=0,vowels=0,constants=0;
    int i,l;

    l=strlen(str);


    for(i=0;i<l;i++){
        if(isalpha(str[i]))
            charac++;
    }

    printf("%d",charac);
    return 0;
}