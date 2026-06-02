#include<stdio.h>
int main()
{
    int a=0,b=1,next,i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
         printf("%d ",next);
        }
       
    return 0;}
