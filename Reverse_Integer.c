#include<stdio.h>
int main()
{
    int a,r,s=0;
    scanf("%d%d%d",&a,&r,&s);
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
        
    }
    printf("%d",s);
}