#include <stdio.h>

#define STUDENT_ID 2515 

int main() {
    int number;

    for (int i = 1; i <= 11; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > STUDENT_ID) {
            int result = number * STUDENT_ID;
            printf("Result: %d\n\n", result);
        } else {
            int sum = number + STUDENT_ID;
            if (sum % 2 == 0) {
                printf("I love my Mother\n\n");
            } else {
                printf("I love my Father.\n\n");
            }
        }
    }

    return 0;
}