#include<stdio.h>
int main()
{
    char ch;
    ch='A';
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=n-i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        for(int j=i-1; j>=1; j--)
        {
            printf(" %c", ch-2);
            ch--;   
        }
        printf("\n");
    }   
    return 0;

}