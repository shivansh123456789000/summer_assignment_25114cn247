#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int empId[MAX], n = 0, choice, id, i, found;
    char name[MAX][50], department[MAX][50];
    float salary[MAX];

    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Department: ");
                scanf("%s", department[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\n------------------------------------------------------------\n");
                    printf("ID\tName\tDepartment\tSalary\n");
                    printf("------------------------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\t\t%.2f\n",
                               empId[i],
                               name[i],
                               department[i],
                               salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(empId[i] == id) {
                        printf("\nEmployee Found:\n");
                        printf("ID         : %d\n", empId[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(empId[i] == id) {
                        printf("Enter New Salary: ");
                        scanf("%f", &salary[i]);
                        printf("Salary updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");

                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}