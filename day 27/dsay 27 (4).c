#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

struct Student s[MAX];
int count = 0;

// Function to add student marks
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Student Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks in Subject 1: ");
    scanf("%d", &s[count].m1);

    printf("Enter Marks in Subject 2: ");
    scanf("%d", &s[count].m2);

    printf("Enter Marks in Subject 3: ");
    scanf("%d", &s[count].m3);

    s[count].total = s[count].m1 + s[count].m2 + s[count].m3;
    s[count].percentage = s[count].total / 3.0;

    printf("Student record added successfully!\n");
    count++;
}

// Function to display marksheet
void generateMarksheet() {
    int roll, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("\n========== MARKSHEET ==========\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Subject 1   : %d\n", s[i].m1);
            printf("Subject 2   : %d\n", s[i].m2);
            printf("Subject 3   : %d\n", s[i].m3);
            printf("Total Marks : %d\n", s[i].total);
            printf("Percentage  : %.2f%%\n", s[i].percentage);

            if (s[i].percentage >= 40)
                printf("Result      : PASS\n");
            else
                printf("Result      : FAIL\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("Roll\tName\tTotal\tPercentage\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f%%\n",
               s[i].roll,
               s[i].name,
               s[i].total,
               s[i].percentage);
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Generate Marksheet\n");
        printf("3. Display All Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                generateMarksheet();
                break;
            case 3:
                displayStudents();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}