#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int a[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of both diagonals = %d\n", sum);

    return 0;
}