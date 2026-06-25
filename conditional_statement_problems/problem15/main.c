#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    long long product = 1;

    for (int i = 1; i <= 17; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        sum += number;
        product *= number;
    }

    printf("Total Sum = %d\n", sum);
    if (sum % 2 == 0) {
        printf("The Sum is EVEN. Please do this program carefully.\n\n");
    } else {
        printf("The Sum is ODD. Please check again.\n\n");
    }

    printf("Total Multiplication = %lld\n", product);
    if (product % 2 == 0) {
        printf("The Multiplication is EVEN. Please do this program carefully.\n");
    } else {
        printf("The Multiplication is ODD. Please check again.\n");
    }
    return 0;
}