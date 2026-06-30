#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Function to add employee
void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee record added successfully!\n");
}

// Function to display employees
void displayEmployees() {
    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\nEmployee Records:\n");
    printf("-----------------------------------\n");
    printf("ID\tName\tSalary\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}

// Function to search employee
void searchEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found:\n");
            printf("ID     : %d\n", emp[i].id);
            printf("Name   : %s\n", emp[i].name);
            printf("Salary : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
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