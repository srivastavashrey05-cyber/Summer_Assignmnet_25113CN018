#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, i, searchId;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[n].author);

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook Records:\n");
                    for (i = 0; i < n; i++) {
                        printf("\nBook %d\n", i + 1);
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (books[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        break;
                    }
                }

                if (i == n)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}