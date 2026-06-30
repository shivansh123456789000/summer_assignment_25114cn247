#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

struct Book book[MAX];
int count = 0;

// Function to add a book
void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &book[count].bookId);

    printf("Enter Book Title: ");
    scanf("%s", book[count].title);

    printf("Enter Author Name: ");
    scanf("%s", book[count].author);

    count++;
    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks() {
    if (count == 0) {
        printf("\nNo books available.\n");
        return;
    }

    printf("\nLibrary Books:\n");
    printf("---------------------------------------------\n");
    printf("Book ID\tTitle\tAuthor\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\n",
               book[i].bookId,
               book[i].title,
               book[i].author);
    }
}

// Function to search a book
void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (book[i].bookId == id) {
            printf("\nBook Found:\n");
            printf("Book ID : %d\n", book[i].bookId);
            printf("Title   : %s\n", book[i].title);
            printf("Author  : %s\n", book[i].author);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
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