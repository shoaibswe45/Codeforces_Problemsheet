#include <stdio.h>

int main() {
    int num;
    long long result; 
    
    int id_last_4 = 1234; 

    printf("Using %d as the last 4 digits of the ID.\n\n", id_last_4);

    for (int i = 1; i <= 13; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        result = (long long)num * id_last_4;
        
        printf("Total multiplication: %lld\n", result);

        if (result % 2 == 0) {
            printf("My ID is an EVEN Number.\n\n");
        } else {
            printf("This is my University ID.\n\n");
        }
    }
    return 0;
}