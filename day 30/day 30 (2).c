#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int bookId[MAX], issued[MAX] = {0};
    char title[MAX][50], author[MAX][50];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Title: ");
                scanf("%s", title[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                issued[n] = 0;
                n++;

                printf("Book added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\n---------------------------------------------------------\n");
                    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
                    printf("---------------------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t%s\n",
                               bookId[i],
                               title[i],
                               author[i],
                               issued[i] ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(bookId[i] == id) {
                        printf("\nBook Found:\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        printf("Status  : %s\n",
                               issued[i] ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(bookId[i] == id) {
                        found = 1;

                        if(issued[i] == 0) {
                            issued[i] = 1;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book is already issued.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

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