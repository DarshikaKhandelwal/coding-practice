#include<stdio.h>
void isalphabet(l)
{
    if((l>='a' && l<='z') || (l>='A' && l<='z'))
    {
        printf("The character entered by you is an alphabet");
    }
    else
    {
       printf("The character entered by you is a number");
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    isalphabet(c);
}
