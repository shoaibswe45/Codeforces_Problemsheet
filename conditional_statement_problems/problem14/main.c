#include <stdio.h>
#define MY_AGE 21

int main() {
    int number;
    int total_multiplication = 1;
    int negative_count = 0;

    for (int i = 1; i <= 6; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number < 0) {
            total_multiplication *= number;
            negative_count++;
        } else if (number > 0) {
            int result = number * MY_AGE;
            printf("Result (Positive * Age): %d\n\n", result);
        }
    }
    if (negative_count > 0) {
        if (total_multiplication > -3267) {
            printf("Today is Saturday\n");
        } else if (total_multiplication < -649) {
            printf("I love my country.\n");
        } else {
            printf("I love my family.\n");
        }
    } else {
        printf("No negative numbers were entered.\n");
    }

    return 0;
}