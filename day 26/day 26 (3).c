#include<stdio.h>
int main(){
    int withdraw , deposit, n ,current_balance = 500;
    printf("--------------WELCOME TO OUR MEOW MEOW BANK---------------");
    printf("-----------atm.  menu  --------  \n");
    printf("1 for check balance : \n");
    printf("2 for deposit :\n");
    printf("3 for withdraw :\n");
    printf("4 for exit ");
    printf("enter your choice : \n");
    scanf("%d",&n);
    if (n==1){
        
        printf("your balance is %d :\n" ,current_balance);
        printf("thank you for visiting to our meow moew bank");


    }
        
    else if(n==3){
        printf("enter the amount : ");
        scanf("%d", &withdraw);
        if (withdraw<=current_balance){
            current_balance= current_balance-withdraw;

            printf("amount withdrwan : %d\n" ,withdraw);
            printf("remaining balance: %d\n", current_balance);
            printf("thank you for visiting to our meow moew bank");


        }
        else {
            printf("insufficient balance ");
            printf("thank you for visiting to our meow moew bank");

        }
    }
    else if (n==2){
        printf("enter the amount you want to deposit : ");
        scanf("%d", &deposit);
        current_balance= current_balance+deposit;
        printf("amount successfully deposited in your account : %d\n", deposit);
        printf("current balance now : %d \n" , current_balance);
        printf("thank you for visiting to our meow moew bank");
    }
    else {
        printf("thank you for visiting to our meow moew bank");
    }
}
