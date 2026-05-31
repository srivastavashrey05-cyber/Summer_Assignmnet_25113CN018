#include <stdio.h>

int main() {
    int n, a, n1, temp, count = 0, r = 0;

    printf("Enter the number = ");
    scanf("%d", &n);

    n1 = n;
    temp = n;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        a = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= a;
        }

        r += power;
        temp /= 10;
    }

    if (r == n1)
        printf("%d is an Armstrong number", n1);
    else
        printf("%d is not an Armstrong number", n1);

    return 0;
}