#include<stdio.h>
int palindrome(int n)
{
    int rev=0, temp, digit;
    temp=n;
    while(n!=0)
    {
        digit = n %10;
        rev= rev*10+digit;
        n=n/10;
       


    }
    if(temp==rev)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
int main()
{
    int number;
    printf("enter your number : \n");
    scanf("%d", &number);
    palindrome(number);

}