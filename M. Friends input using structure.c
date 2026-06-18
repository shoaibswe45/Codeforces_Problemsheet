#include <stdio.h>

struct Friend {
    char name[50];
    int id;
    int age;
};

int main() {
    struct Friend friends[2];
    int i;
    
    for(i = 0; i < 2; i++) {
        printf("\nMy friend %d\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]s", friends[i].name); 
        
        printf("ID: ");
        scanf("%d", &friends[i].id);
        
        printf("Age: ");
        scanf("%d", &friends[i].age);
    }
    
    printf("\nhere is my all friend details\n");
    for(i = 0; i < 2; i++) {
        printf("\nmy friend %d details:\n", i + 1);
        printf("Name: %s\n", friends[i].name);
        printf("ID: %d\n", friends[i].id);
        printf("Age: %d\n", friends[i].age);
    }
    
    return 0;
}
