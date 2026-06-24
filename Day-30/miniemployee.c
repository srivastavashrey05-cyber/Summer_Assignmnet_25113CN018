#include <stdio.h>

int main() {
    int n, i;
    int empId[100];
    float salary[100];
    char name[100][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n===== EMPLOYEE RECORDS =====\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", empId[i]);
        printf("Name   : %s\n", name[i]);
        printf("Salary : %.2f\n", salary[i]);
    }

    return 0;
}