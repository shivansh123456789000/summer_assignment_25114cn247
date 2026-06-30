#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];
    int choice;

    do {
        printf("\n===== Menu-Driven String Operations =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find String Length\n");
        printf("4. Copy String\n");
        printf("5. Compare Two Strings\n");
        printf("6. Concatenate Strings\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                break;

            case 2:
                printf("String: %s\n", str1);
                break;

            case 3:
                printf("Length of String = %lu\n", strlen(str1));
                break;

            case 4:
                strcpy(copy, str1);
                printf("Copied String: %s\n", copy);
                break;

            case 5:
                printf("Enter another string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Both strings are Equal.\n");
                else
                    printf("Both strings are Not Equal.\n");
                break;

            case 6:
                printf("Enter another string: ");
                scanf("%s", str2);

                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}