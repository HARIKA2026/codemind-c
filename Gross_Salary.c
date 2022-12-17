#include<stdio.h>
int main()
{
    int a;
    float b,h,g;
    scanf("%d",&a);
    if(a<=10000)
    {
        b=0.8*a;
        h=0.2*a;
    }
    else if(a>10000&&a<=20000)
    {
        b=0.9*a;
        h=0.25*a;
    }
    else 
    {
        b=0.95*a;
        h=0.3*a;
    }
    g=b+h+a;
    printf("%0.2f",g);
}