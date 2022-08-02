/*Author: Antarin ghosal
Date: 29.03.2022
Program:  WAP to check whether an integer number is a Armstrong number or not!.
*/

#include<stdio.h>

int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
