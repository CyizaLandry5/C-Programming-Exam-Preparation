#include<stdio.h>

int main() {
    // i=rows j=cols
    int rows_of_matrix, columns_of_matrix, i_for_loop, j_for_loop;
    int rows[10][10], columns[10][10], sum[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows_of_matrix);
    printf("Enter n56umber of columns: ");
    scanf("%d", &columns_of_matrix);

    // Get elements of the first matrix
    printf("Enter elements of the 1st Matrix:\n");
    for(i_for_loop = 0; i_for_loop < rows_of_matrix; i_for_loop++) {
        for(j_for_loop = 0; j_for_loop < columns_of_matrix; j_for_loop++) {
            printf("Enter element at row %d, column %d: ", i_for_loop + 1, j_for_loop + 1);
            scanf("%d", &rows[i_for_loop][j_for_loop]);
        }
    }

    // Get elements of the second matrix
    printf("Enter elements of the 2nd Matrix:\n");
    for(i_for_loop = 0; i_for_loop < rows_of_matrix; i_for_loop++) {
        for(j_for_loop = 0; j_for_loop < columns_of_matrix; j_for_loop++) {
            printf("Enter element at row %d, column %d: ", i_for_loop + 1, j_for_loop + 1);
            scanf("%d", &columns[i_for_loop][j_for_loop]);
        }
    }

    // Addition of matrices
    for(i_for_loop = 0; i_for_loop < rows_of_matrix; i_for_loop++) {
        for(j_for_loop = 0; j_for_loop < columns_of_matrix; j_for_loop++) {
            sum[i_for_loop][j_for_loop] = rows[i_for_loop][j_for_loop] + columns[i_for_loop][j_for_loop];
        }
    }

    // Print the sum of the matrices
    printf("Sum of matrices:\n");
    for(i_for_loop = 0; i_for_loop < rows_of_matrix; i_for_loop++) {
        for(j_for_loop = 0; j_for_loop < columns_of_matrix; j_for_loop++) {
            printf("%d ", sum[i_for_loop][j_for_loop]);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}

