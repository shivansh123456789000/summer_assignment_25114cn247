#include<stdio.h>
int main()
{
    int i , sum=0, temp,digit, fact=1, n;
    printf("enter the number : \n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        n=n/10;

    }
    if(sum==temp)
    {
        printf("%d is a strong number",temp);
    }
    else
    {
        printf("%d is not a strong number",temp);
    }
    return 0;
}