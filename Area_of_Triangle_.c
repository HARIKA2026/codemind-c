#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float h,s;
    s=(a+b+c)/2;
    h=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",h);
}