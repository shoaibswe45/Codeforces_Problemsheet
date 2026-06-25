#include <stdio.h>

int main() {
    int number;
    int sum_positive = 0;

    for (int i = 1; i <= 12; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &number);

        if (number > 0) {
            printf("%d is Positive\n", number);
            sum_positive += number;
        } else if (number < 0) {
            printf("%d is Negative\n", number);
        }
    }

    printf("\nTotal Sum of Positive Numbers: %d\n", sum_positive);

    if (sum_positive > 2689) {
        printf("I am Successful\n");
    } else if (sum_positive < 589) {
        printf("I love Programming.\n");
    } else {
        printf("I have to do practice more.\n");
    }

    return 0;
}