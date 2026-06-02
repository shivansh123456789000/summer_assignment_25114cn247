#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,mul;
    printf("Enter your number:");
    scanf("%d",&n);

    printf("Multiplication table of the number %d is:\n",n);
    for( i=1; i<=10; i++)
    {
        mul = n * i;
        printf("%d x %d = %d\n",n,i,mul);
    }
    return 0;
}