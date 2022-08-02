/*Author : Antarin Ghosal
Program : WAP to extract the first character of each word of a given string */


#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int i,l;
    printf("\nEnter a string : ");
    gets(str);

    l = strlen(str);

    printf("The first character of every word is/are : ");
    printf("%c ",str[0]);

    for(i=0;i<l;i++){
        if(str[i]==' '){
            printf("%c ",str[i+1]);
        }
    }

    return 0;
}