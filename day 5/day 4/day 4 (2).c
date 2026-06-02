#include<stdio.h>
int main()
{
    int a=0,b=1,next;
    while(1)
    {
        next=a+b;
        a=b;
        b=next;
         printf("%d ",next);
        
    }
    return 0;
}