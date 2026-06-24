#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], temp[100];
    int choice, i, len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (1) {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of String = %lu\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);
                len = strlen(temp);

                for(i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - 1 - i];
                    temp[len - 1 - i] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++) {
                    temp[i] = toupper(temp[i]);
                }

                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);
                len = strlen(temp);

                for(i = 0; i < len / 2; i++) {
                    char ch = temp[i];
                    temp[i] = temp[len - 1 - i];
                    temp[len - 1 - i] = ch;
                }

                if(strcmp(str, temp) == 0)
                    printf("String is a Palindrome.\n");
                else
                    printf("String is Not a Palindrome.\n");
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