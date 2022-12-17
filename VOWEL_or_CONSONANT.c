#include<stdio.h>
int main()
{
    char h;
    scanf("%c",&h);
    if(h=='a'||h=='e'||h=='i'||h=='o'||h=='u'||h=='A'||h=='E'||h=='I'||h=='O'||h=='U')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}