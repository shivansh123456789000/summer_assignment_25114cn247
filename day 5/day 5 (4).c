#include<stdio.h>
int main()
{
    int n, i, j,count,largest=0;
    printf("enter the number : \n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {       
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                largest=i;
            }
        }
    }
    printf("the largest prime factor of %d ",largest);
    return 0;
}
            