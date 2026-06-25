#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct person {
    char name[40];
    char city[40];
    char hobby[40];
    int age;
    float height;
    char grade;
};

int main() {
    struct person p;
    char identity[40];
    char interest[40];
    float average;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name [strcspn(p.name, "\n")] = 0;

    printf("Enter city: ");
    fgets(p.city, sizeof(p.city), stdin);
    p.city [strcspn(p.city, "\n")] = 0;

    printf("Enter hobby: ");
    fgets(p.hobby, sizeof(p.hobby), stdin);
    p.hobby [strcspn(p.city, "\n")] = 0;

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter height: ");
    scanf("%f", &p.height);

    printf("Enter grade: ");
    scanf("%d", &p.grade);

    printf("Name: %s\n", p.name);
    printf("City: %s\n", p.city);
    printf("Hobby: %s\n", p.hobby);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
    printf("Grade: % c\n", p.grade);

    // length
    printf("Name length: %zu\n", strlen(p.name));
    printf("City length: %zu\n", strlen(p.city));
    printf("Hobby length: %zu\n", strlen(p.hobby));

    // concatenate
    strcpy(identity, p.city);
    strcat(identity, p.name);
    printf("Identity String: %s\n", identity);

    // first half to interest
    int hobbylen = strlen(p.hobby);
    int halflen = hobbylen / 2;
    strncpy(interest, p.hobby, halflen);
    interest[halflen] = '\0';

    // compare length
    int idlen = strlen(identity);
    int intlen = strlen(interest);

    if (idlen > intlen) {
        printf("Identity is longer than interest\n");
    } else if (intlen > idlen) {
        printf("Interest is longer than identity\n");
    } else {
        printf("Identity and interest is equal\n");
    }

    // average
    average = (p.age + p.height) / 2.0;

    // convert
    for (int i=0; p.hobby[i] != '\0'; i++)

    printf("Name: %s\n", p.name);
    printf("City: %s\n", p.city);
    printf("Hobby: %s\n", p.hobby);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
    printf("Grade: %c\n", p.grade);
    printf("Identity: %s\n", identity);
    printf("Interest: %s\n", interest);
    printf("Average: %.2f\n", average);

    return 0;
}
