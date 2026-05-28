#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d natural numbers is %d",n,sum);
    return 0;
}