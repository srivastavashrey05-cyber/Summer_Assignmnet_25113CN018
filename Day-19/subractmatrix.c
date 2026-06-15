#include <stdio.h>

int main() {
    int rows, column;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &column);

    int a[10][10], b[10][10], sub[10][10];

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Subtraction of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            sub[i][j] = a[i][j] - b[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}