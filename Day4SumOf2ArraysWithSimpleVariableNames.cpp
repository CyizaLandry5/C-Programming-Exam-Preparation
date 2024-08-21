#include<stdio.h>

int main() {
    // i=rows j=cols
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    // Get elements of the first matrix
    printf("Enter elements of the 1st Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Get elements of the second matrix
    printf("Enter elements of the 2nd Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Addition of matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the sum of the matrices
    printf("Sum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}

