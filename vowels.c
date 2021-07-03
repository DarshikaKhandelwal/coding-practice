#include<stdio.h>
int isvowel(x)
{
    if(x=='a')
        {
            return(1);
        }
    else if(x=='e')
        {
            return(1);
        }
    else if(x=='i')
        {
            return(1);
        }
    else if(x=='o')
        {
            return(1);
        }
    else if(x=='u')
        {
            return(1);
        }
    else
        {
            return(0);
        }
}
int main()
{
    char c;
    scanf("%c",&c);
    if(isvowel(c))
    {
        printf("this letter is a vowel");
    }
    else
    {
        printf("This letter is not a vowel");
    }
}
