#include<stdio.h>
int main()
{
    int n,s=0,p=1;
    scanf("%d",&n);
    while(n)
    {
        s=s+n%10;
        p=p*n%10;
        n=n/10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}
