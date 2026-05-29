#include<stdio.h>
void main()
{
    int num , sum=0;
    printf("enter a number : \n");
    scanf("%d",&num);
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("sum of digits is %d",sum); 
}