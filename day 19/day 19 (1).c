#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum Matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
