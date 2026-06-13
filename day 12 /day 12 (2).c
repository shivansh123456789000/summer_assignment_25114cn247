#include<stdio.h>
void armstrong(int n )
{
    int sum =0, temp, remender ,count =0, power,i;
    temp= n;
    count=0;
    while(n!=0)
    {
    n = n / 10;
    count++;
    }
    n = temp;
    while(n!=0)
    {
        remender = n%10;
        power=1;
        for(i=0;i<count;i++)
        {
            power = power *remender;

        }
        sum= sum+power;
        n=n/10;


    }
    if(temp==sum){
        printf("it is armstrong number ");

    }
    else{
        printf("it is not an armstrong number" );

    }
    
}
int main(){


int number;
printf ("enter the number : \n ");
scanf("%d", &number);
armstrong(number);
return 0;
}

