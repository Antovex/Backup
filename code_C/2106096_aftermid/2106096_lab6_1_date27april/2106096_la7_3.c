/*Author : Antarin Ghosal
Program : WAP to check whether a string entered through keyboard is palindrome or not.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int l,i,flag=0;

    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);

    l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i]==str[l-i]){
            flag=1;
        }
        // else if (str[i]!=str[l-i]){
        //     flag=0;
        // }
    }

    if(flag==1)
        printf("\nThe given input is palindrome !!");
    else printf("\nNot palindrome.");

    return 0;
}