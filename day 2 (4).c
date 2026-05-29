#include<stdio.h>
int main()
{
    int temp , num , rev=0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {   digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
        if(temp==rev)
        {
            printf("The number is a palindrome.");
            return 0;
        }
        else
        {
            printf("The number is not a palindrome.");
            return 0;
        }
    
    
}
