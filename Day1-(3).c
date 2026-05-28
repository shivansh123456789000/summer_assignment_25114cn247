#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,factorial=1;
    printf("Enter your number:");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of given number is: %d",factorial);
    return 0;
}