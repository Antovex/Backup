/*Author : Antarin Ghosal
*/


#include<stdio.h>

int main(){
    char s[]="Hello, World";
    printf(">>%s<<\n",s);
    printf(">>%20s<<\n",s);           //left justification
    printf(">>%-20s<<\n",s);          //right justification
    printf(">>%.4s<<\n",s);           //only prints first 4 characters 
    printf(">>%-20.4s<<\n",s);        //right justification with 20 characters but only 4 characters of string is printed.
    printf(">>%20.4s<<\n",s);         //left justification with 20 characters but only 4 characters of string is printed.
    printf(">>%.4s<<\n",s);           //prints 4 characters after decimal point but here there is no decimal so everything will be printed as it will be assumed that the whole string is before decimal.
    return 0;
}