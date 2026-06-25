#include <stdio.h>
#define ID_LAST_2_DIGITS 15 

int main() {
    int number;

    for (int i = 1; i <= 18; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            if (number > 0) {
                int result = number * ID_LAST_2_DIGITS;
                printf("Result (Even & Positive): %d\n\n", result);
            } 
            else if (number < 0) {
                printf("Ohho! Sad.\n\n");
            } 
            else {
                printf("The number is 0 (Even, but neutral).\n\n");
            }
        } else {
            printf("%d is an ODD number.\n\n", number);
        }
    }
    
    return 0;
}