#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        int temp = num, count = 0;
        int sum = 0;

        while (temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, count);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}