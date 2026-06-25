#include <stdio.h>
int main() {
    long long id = 2425205341320LL;
    long long last4 = 1320LL;
    int total = 6;
    long long number, result;

    printf("  ID : 2425205341320\n");
    printf("  Last 4 digits : 1320\n");

    for (int i = 1; i <= total; i++) {
        printf("Enter number %d: ", i);
        scanf("%lld", &number);

        if (number < last4) {
            result = number * id;
            printf("  %lld < 1320 & Multiply: %lld * %lld = %lld\n",
                   number, number, id, result);
        } else {
            result = number + id;
            printf("  %lld > 1320 & Add: %lld + %lld = %lld\n",
                   number, number, id, result);
        }

        if (result % 2 == 0) {
            printf("  Daffodil International University\n");
        } else {
            printf("  Software Engineering Department.\n");
        }
    }
    return 0;
}