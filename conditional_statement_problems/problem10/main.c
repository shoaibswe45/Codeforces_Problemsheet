#include <stdio.h>

int main() {
    int number;
    long long positive = 1;
    long long negative = 1;
    int positive_count = 0;
    int negative_count = 0;

    for (int i = 1; i <= 6; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &number);

        if (number > 0) {
            printf("%d is Positive\n", number);
            positive *= number;
            positive_count++;
        } else if (number < 0) {
            printf("%d is Negative\n", number);
            negative *= number;
            negative_count++;
        } else {
            printf("0 is neither positive nor negative\n");
        }
    }

    if (positive_count == 0) {
        positive = 0;
    }
    if (negative_count == 0) {
        negative = 0;
    }

    printf("\nTotal Multiplication of Positive Numbers: %lld\n", positive);
    printf("Total Multiplication of Negative Numbers: %lld\n", negative);

    if (negative < -4554) {
        printf("Very large Negative Number\n");
    } else if (negative < -789) {
        printf("Number choice is good\n");
    } else {
        printf("Happy Programming\n");
    }

    return 0;
}