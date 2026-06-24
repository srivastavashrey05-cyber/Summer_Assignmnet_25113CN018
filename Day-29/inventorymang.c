#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n = 0, choice, i, searchId;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                n++;
                printf("Product added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No products available.\n");
                } else {
                    printf("\nProduct List:\n");
                    for (i = 0; i < n; i++) {
                        printf("\nID       : %d", p[i].id);
                        printf("\nName     : %s", p[i].name);
                        printf("\nQuantity : %d", p[i].quantity);
                        printf("\nPrice    : %.2f\n", p[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++) {
                    if (p[i].id == searchId) {
                        printf("\nProduct Found!\n");
                        printf("ID       : %d\n", p[i].id);
                        printf("Name     : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        printf("Price    : %.2f\n", p[i].price);
                        break;
                    }
                }

                if (i == n)
                    printf("Product not found.\n");

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