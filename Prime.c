// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           
            c=1;
            break;
        }
    }
    
   if(c==0)
   {
       printf("Prime");
   }
   else
   {
       printf("Not Prime");
   }
}