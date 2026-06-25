#include <stdio.h>

int main() {
    int num;
    int id_last_3 = 123; 
    float ssc_result = 5.00; 

    printf("Using %.2f for SSC result.\n\n", ssc_result);

    for (int i = 1; i <= 9; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            int even_result = num * id_last_3;
            printf("The number %d is EVEN.\n", num);
            printf("Output: %d * %d = %d\n\n", num, id_last_3, even_result);
        } else {
            float odd_result = num * ssc_result;
            printf("The number %d is ODD.\n", num);
            printf("Output: %d * %.2f = %.2f\n\n", num, ssc_result, odd_result);
        }
    }

    return 0;
}