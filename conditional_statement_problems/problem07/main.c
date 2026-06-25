#include <stdio.h>

int main() {
    int number;
    int sum_div_by_9 = 0;
    int sum_other_odds = 0;

    for (int i = 1; i <= 4; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 9 == 0) {
            sum_div_by_9 += number;
            if (number % 2 == 0) {
                printf("%d is divided by 9 and is EVEN.\n", number);
            } else {
                printf("%d is divided by 9 and is ODD.\n", number);
            }
        }
        else {
            if (number % 2 != 0) {
                sum_other_odds += number;
            }
        }
    }
    printf("Sum of all numbers divided by 9: %d\n", sum_div_by_9);
    printf("Sum of all other ODD numbers: %d\n", sum_other_odds);

    return 0;
}