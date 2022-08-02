/*Author : Antarin Ghosal
Program :WAP to reads a sentence and prints frequency of each of the vowels and 
total count of Consonants.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i,l,a=0,e=0,I=0,o=0,u=0,consonants=0,spaces=0;
    printf("Enter the String : ");
    gets(str);

    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='A'){
            a++;
        }
        else if(str[i]=='e' || str[i]=='E'){
            e++;
        }
        else if(str[i]=='i' || str[i]=='I'){
            I++;
        }
        else if(str[i]=='o' || str[i]=='O'){
            o++;
        }
        else if(str[i]=='u' || str[i]=='U'){
            u++;
        }
        else if(str[i]==' '){
            continue;
        }
        else consonants++;
    }

    printf("The number of Vowels are as follows \n a or A = %d \n e or E = %d \n i or I = %d \n o or O = %d \n u or U =  %d \n",a,e,I,o,u);
    printf("\nThe number of consonants are : %d",consonants);

    return 0;
}