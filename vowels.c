#include<stdio.h>
void isvowel(x)
{
    if(x=='a'/'e'/'i'/'o'/'u')
        {
            printf("The letter is a vowel");
        }
    else
        {
            printf("The letter is not a vowel");
        }
}
int main()
{
    char c;
    scanf("%c",&c);
    isvowel(c);
}
