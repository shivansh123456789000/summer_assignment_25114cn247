#include<stdio.h>
void fibonacci(int n )
{
    int a=0,b=1 , fibo ,i;
    for(i=1;i<=n;i++){
        fibo=a+b;
        a=b;
        b=fibo;
        printf("%d",fibo);
    }
}
int main()
{
    int number;
    printf("enter the number for which you want fibonacci  \n");
    scanf("%d", &number);
    fibonacci(number);
}