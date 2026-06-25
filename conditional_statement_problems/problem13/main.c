#include <stdio.h>

#define MY_ID 2515

int main() {
    int number;
    int total_sum = 0;
    long long odd_product = 1;
    int odd_count = 0;

    for (int i = 1; i <= 12; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        int subtraction_result = MY_ID - number;
        total_sum += subtraction_result;

        if (number % 2 == 0) {
            printf("I am a student of SWE Department.\n\n");
        } else {
            odd_product *= number;
            odd_count++;
        }
    }
    printf("Total sum of all subtraction results: %d\n", total_sum);
    
    if (odd_count > 0) {
        printf("Product of all ODD numbers: %lld\n", odd_product);
    } else {
        printf("No ODD numbers were entered to multiply.\n");
    }

    return 0;
}