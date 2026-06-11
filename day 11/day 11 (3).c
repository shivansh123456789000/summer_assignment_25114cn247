#include<stdio.h>
int prime(int n)
{
    if (n <= 1){
        return 0; // Not prime
    }
    for (int i = 2; i <= n-1; i++)
    {
        if (n % i == 0){
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}