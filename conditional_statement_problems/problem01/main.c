#include <stdio.h>

int main() {
    int num;
    int result;
    
    int id_last_4 = 1234; 

    printf("Using %d as the last 4 digits of the ID.\n\n", id_last_4);

    for (int i = 1; i <= 11; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        result = num * id_last_4;

        if (result < 3275) {
            printf("Nature is Beautiful\n\n");
        } else if (result < 5789) {
            printf("Today is Wednesday.\n\n");
        } else {
            printf("Need to practice more!\n\n");
        }
    }
    return 0;
}