#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], count = 0;
char name[MAX][50];
float marks[MAX];

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Student Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student added successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n--------------------------------------\n");
    printf("Roll\tName\tMarks\n");
    printf("--------------------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, r, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

// Function to update marks
void updateMarks() {
    int i, r, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);