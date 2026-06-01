#include<stdio.h>
int main()
{
    int i,start,end,digit,sum=0,temp;
    printf("Enter the start and end range: ");
    scanf("%d%d",&start,&end);
    
    for(i=start;i<=end;i++)
    {
        temp=i;
        while(temp>0)
        {

        digit=temp%10;
        sum=sum+digit*digit*digit;
        temp=temp/10;
     }
    if(i==sum)
    {
        printf("%d is an armstrong number",i);
    }
    else
    {
        printf("%d is not an armstrong number",i);
    }
    return 0;
}
}