#include <stdio.h>

int main() {
    int number;
    int negative = 1;
    int negative_count = 0;

    for (int i = 1; i <= 6; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &number);

        if (number > 0) {
            printf("%d is Positive\n", number);
        } else if (number < 0) {
            printf("%d is Negative\n", number);
            negative *= number;
            negative_count++;
        } else {
            printf("0 is neither positive nor negative\n");
        }
    }

    if (negative_count == 0) {
        negative = 0;
    }

    printf("\nTotal Multiplication of Negative Numbers: %d\n", negative);

    if (negative > -3267) {
        printf("Today is Saturday\n");
    } else if (negative < -649) {
        printf("I love my country.\n");
    } else {
        printf("I love my family.\n");
    }

    return 0;
}