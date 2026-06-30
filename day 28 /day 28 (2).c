#include <stdio.h>
#include <string.h>

#define MAX 100

struct BankAccount {
    int accountNo;
    char name[50];
    float balance;
};

struct BankAccount account[MAX];
int count = 0;

// Function to create account
void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account[count].accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", account[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account[count].balance);

    count++;
    printf("Bank account created successfully!\n");
}

// Function to display all accounts
void displayAccounts() {
    if (count == 0) {
        printf("\nNo bank accounts found.\n");
        return;
    }

    printf("\nBank Account Records:\n");
    printf("------------------------------------------------\n");
    printf("Acc No\tName\t\tBalance\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n",
               account[i].accountNo,
               account[i].name,
               account[i].balance);
    }
}

// Function to search account
void searchAccount() {
    int accNo, found = 0;

    printf("\nEnter Account Number to search: ");
    scanf("%d", &accNo);

    for (int i = 0; i < count; i++) {
        if (account[i].accountNo == accNo) {
            printf("\nAccount Found:\n");
            printf("Account Number : %d\n", account[i].accountNo);
            printf("Holder Name    : %s\n", account[i].name);
            printf("Balance        : %.2f\n", account[i].balance);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                displayAccounts();
                break;
            case 3:
                searchAccount();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}