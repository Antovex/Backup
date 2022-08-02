/*
Name: Antarin ghosal
WAP to declare an union named as ABC having three members a, b and c as character, integer
and double respectively. Assign user entered values to these members respectively one by one
and display these values immediately. Again assign these user entered values to a, b, c one by
one all together and display these values at last. Find the difference.*/
#include<stdio.h>
union ABC
{
    char a;
    int b;
    double c;
}ob;
int main()
{
    int n;
    char s;
    double x;
    printf("Enter Value Of int:~");
    scanf("%i",&n);
    printf("Enter Charater Value:~\n");
    scanf("\n%c",&s);
    printf("Enter Double Value:~\n");
    scanf("%ld",&x);
    ob.a = s;
    printf("Current Value In %u Is %c After Adding a Value\n",&ob,ob.a);
    ob.b = n;
    printf("Current Value In %u Is %i After Adding b Value\n",&ob,ob.b);
    ob.c = x;
    printf("Current Value In %u Is %i After Adding b Value\n",&ob,ob.c);
    ob.a = s;
    ob.b = n;
    ob.c = x;
    printf("Current Value In %u Is %c After Adding All Values\n",&ob,ob.a);
    printf("Current Value In %u Is %i After Adding All Values\n",&ob,ob.b);
    printf("Current Value In %u Is %ld After Adding All Values",&ob,ob.c);
}