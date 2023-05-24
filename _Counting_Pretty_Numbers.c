#include<stdio.h>
int main()
{
    int j,x;
    scanf("%d",&x);
    for(j=0;j<x;j++)

{
    int m,n,i,r;
    scanf("%d%d",&m,&n);
    int temp;
    
    temp=0;
    for(i=m;i<=n;i++)
    {
        
        if(i%10==2||i%10==3||i%10==9)
        temp++;
    }
    
            printf("%d
",temp);
        
}
}