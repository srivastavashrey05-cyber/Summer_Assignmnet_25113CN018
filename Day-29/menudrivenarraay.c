#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice;
    int sum, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 5:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}