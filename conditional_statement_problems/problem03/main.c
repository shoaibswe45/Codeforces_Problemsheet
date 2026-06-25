#include <stdio.h>

int main() {
    int num;
    int even_sum = 0;

    printf("Please enter 19 numbers.\n\n");

    for (int i = 1; i <= 19; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is EVEN.\n", num);
            even_sum += num;
        } else {
            printf("%d is ODD.\n", num);
        }
    }

    printf("\nTotal sum of all EVEN numbers: %d\n\n", even_sum);

    if (even_sum < 2689) {
        printf("Happy Programming\n");
    } else if (even_sum < 3759) {
        printf("I love Programming.\n");
    } else {
        printf("I have to practice more.\n");
    }

    return 0;
}