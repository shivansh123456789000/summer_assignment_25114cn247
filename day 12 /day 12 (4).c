#include<stdio.h>
void perfect_number(int n )
{
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
        {
            sum =sum +i;

        }
        
    }
    if(sum==n){
        printf("is is perfect number %d", sum);
    }
    else{
        printf("not a perfect number");
    }
}
int main()
{
    int number;
    printf("enter the number : \n");
    scanf("%d", &number);
    perfect_number(number);
}