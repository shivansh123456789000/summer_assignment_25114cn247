#include <stdio.h>
#include <string.h>

#define MAX 100

struct Ticket {
    int ticketNo;
    char name[50];
    char destination[50];
};

struct Ticket ticket[MAX];
int count = 0;

// Function to book a ticket
void bookTicket() {
    printf("\nEnter Ticket Number: ");
    scanf("%d", &ticket[count].ticketNo);

    printf("Enter Passenger Name: ");
    scanf("%s", ticket[count].name);

    printf("Enter Destination: ");
    scanf("%s", ticket[count].destination);

    count++;
    printf("Ticket booked successfully!\n");
}

// Function to display all bookings
void displayTickets() {
    if (count == 0) {
        printf("\nNo ticket bookings found.\n");
        return;
    }

    printf("\nTicket Booking Records:\n");
    printf("------------------------------------------------\n");
    printf("Ticket No\tName\t\tDestination\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t\t%s\t\t%s\n",
               ticket[i].ticketNo,
               ticket[i].name,
               ticket[i].destination);
    }
}

// Function to search a booking
void searchTicket() {
    int tNo, found = 0;

    printf("\nEnter Ticket Number to search: ");
    scanf("%d", &tNo);

    for (int i = 0; i < count; i++) {
        if (ticket[i].ticketNo == tNo) {
            printf("\nTicket Found:\n");
            printf("Ticket Number : %d\n", ticket[i].ticketNo);
            printf("Passenger Name: %s\n", ticket[i].name);
            printf("Destination   : %s\n", ticket[i].destination);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Ticket not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                displayTickets();
                break;
            case 3:
                searchTicket();
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