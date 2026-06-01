#include<stdio.h>
int main()
{
    int sum=0,temp,n,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is armstrong number");       

    }
    else
    {
        printf("not armstrong number");
    }
}