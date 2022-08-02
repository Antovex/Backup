/*Author : Antarin Ghosal*/


#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char str[30];

    //methods of input
    scanf("%s",str);                  //no & required but takes input till ' '.
    scanf("%[^/n]s",str);             //takes all input.
    gets(str);                        //takes unlimited amount of input.
    fgets(str,sizeof(str),stdin);     // better gets

    //methods of output
    sprintf(str,"Sum is %d and %d",20,30);      //stores formated data in the str array but doesn't output on console. 
    printf("%s",str);
    puts(str);

    return 0;
}