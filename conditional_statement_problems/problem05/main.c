#include <stdio.h>

int main() {
    int num;
    long long odd_product = 1;
    int has_odd = 0; 
    
    float cgpa = 3.85; 

    printf("Using %.2f for the 1st semester CGPA.\n\n", cgpa);

    for (int i = 1; i <= 23; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            float even_result = num * cgpa;
            printf("The number %d is EVEN.\n", num);
            printf("Result (%d * %.2f) = %.2f\n\n", num, cgpa, even_result);
        } else {
            printf("The number %d is ODD.\n\n", num);
            odd_product = odd_product * num;
            has_odd = 1; 
        }
    }

    if (has_odd == 1) {
        printf("Total multiplication result of all ODD numbers: %lld\n", odd_product);
    } else {
        printf("No ODD numbers were entered, so there is no multiplication result.\n");
    }

    return 0;
}