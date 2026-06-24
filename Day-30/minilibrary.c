#include <stdio.h>

int main() {
    char books[100][50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name of Book %d: ", i + 1);
        scanf(" %[^\n]", books[i]);
    }

    printf("\n===== LIBRARY BOOK LIST =====\n");

    for(i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }

    return 0;
}