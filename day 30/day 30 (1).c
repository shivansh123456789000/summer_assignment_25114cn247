#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], n = 0, i, searchRoll, found;
    char name[100][50];
    float marks[100];
    int choice;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%f", &marks[n]);

                n++;
                printf("Student record added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n----------------------------------------\n");
                    printf("Roll\tName\tMarks\n");
                    printf("----------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               roll[i], name[i], marks[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("\nStudent Found:\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %.2f\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student record not found.\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}