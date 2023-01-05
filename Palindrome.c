#include<stdio.h>
int main()
{
    int n,r,m,a,s=0;
    scanf("%d",&a);
    m=a;
    while(m!=0)
    {
        r=m%10;
        s=s*10+r;
        m=m/10;
    }
    if(s==a)
    printf("True");
    else
    {
        printf("False");
    }
}