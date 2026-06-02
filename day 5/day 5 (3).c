#include<stdio.h>
int main()
{
    int i , n, factor=1;
    printf("enter the number ;\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factor=factor*i;
            printf("\n %d",factor);
        }
    }
    return 0;
}