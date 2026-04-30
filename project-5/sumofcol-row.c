#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &n);
    printf("Enter the array's column size: ");
    scanf("%d", &m);

    int a[n][m];
    printf("\nEnter array's elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSum of Rows:\n");
    for (i = 0; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < m; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i, rowSum);
    }
    printf("\nSum of Columns:\n");
    for (j = 0; j < m; j++) {
        int colSum = 0;
        for (i = 0; i < n; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j, colSum);
    }
}