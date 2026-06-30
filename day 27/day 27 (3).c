#include <stdio.h>
#include <string.h>

#define MAX 100

struct Salary {
    int empId;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

struct Salary emp[MAX];
int count = 0;

// Function to add salary record
void addSalary() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &emp[count].bonus);

    emp[count].totalSalary = emp[count].basicSalary + emp[count].bonus;

    count++;
    printf("Salary record added successfully!\n");
}

// Function to display all salary records
void displaySalary() {
    if (count == 0) {
        printf("\nNo salary records found.\n");
        return;
    }

    printf("\nSalary Records:\n");
    printf("------------------------------------------------------------\n");
    printf("ID\tName\tBasic\tBonus\tTotal Salary\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].bonus,
               emp[i].totalSalary);
    }
}

// Function to search salary record
void searchSalary() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {
            printf("\nSalary Record Found:\n");
            printf("Employee ID : %d\n", emp[i].empId);
            printf("Name        : %s\n", emp[i].name);
            printf("Basic Salary: %.2f\n", emp[i].basicSalary);
            printf("Bonus       : %.2f\n", emp[i].bonus);
            printf("Total Salary: %.2f\n", emp[i].totalSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Salary record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addSalary();
                break;
            case 2:
                displaySalary();
                break;
            case 3:
                searchSalary();
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