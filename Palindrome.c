#include<stdio.h>
int main()
{
    int a,r,s=0,m;
    scanf("%d",&a);
    m=a;
    while(m>0)
    {
        r=m%10;
        s=s*10+r;
        m=m/10;
    }
    if(a==s)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}