/*Author : Antarin Ghosal
Program : Write a program to concatenate two strings without using any library function.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="Hello",str2[]=" World",str3[30];
    int i=0,m,n;

    m=strlen(str1);
    n=strlen(str2);

    for(i=0;i<=n;i++){
        if(str1[i]!='\0')
            str3[i]=str1[i];
    }
    n=i-2;
    for(i=0;i<=m;i++){
        str3[n+i]=str2[i];
    }

    puts(str3);

    return 0;
}