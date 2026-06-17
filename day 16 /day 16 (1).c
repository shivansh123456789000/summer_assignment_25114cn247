#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    int arr[n - 1];
    
    printf("Enter %d numbers:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for(i = 0; i < n - 1; i++)
    {
        actualSum = actualSum + arr[i];
    }
    
    int missing = expectedSum - actualSum;
    
    printf("Missing number = %d\n", missing);
    
    return 0;
}