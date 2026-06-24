#include <stdio.h>

int main() {
    int n, i;
    char name[100][50];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }

    return 0;
}