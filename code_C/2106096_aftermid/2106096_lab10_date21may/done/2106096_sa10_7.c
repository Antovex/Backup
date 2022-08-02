/*
Name: Antarin ghosal
WAP to declare an union named as ABC having two members a as character and b as
integer . Assign ‘A’ to a, 1088 to b respectively through an union variable ob one by one and
display these these values immediately. Now assign these values to a, b through ob all
together and display these values at last. Find the difference.*/
#include<stdio.h>
union Ob
{
    char a;
    int b;
}ob;
int main()
{
    int n;
    char s;
    printf("Enter Value Of int:~");
    scanf("%i",&n);
    printf("Enter Charater Value:~");
    scanf("%c",&s);
    ob.a = s;
    printf("Current Value In %u Is %c After Adding a Value\n",&ob,ob.a);
    ob.b = n;
    printf("Current Value In %u Is %i After Adding b Value\n",&ob,ob.b);
    ob.a = s;
    ob.b = n;
    printf("Current Value In %u Is %c After Adding Both Values\n",&ob,ob.a);
    printf("Current Value In %u Is %i After Adding Both Value",&ob,ob.b);
}