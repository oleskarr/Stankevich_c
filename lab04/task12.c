#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main(void) {
    FILE *file;
    int n;
    
    printf("Enter number of people: ");
    scanf("%d", &n);
    getchar();
    
    struct Person *people = malloc(n * sizeof(struct Person));
    
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(people[i].name, 50, stdin);
        people[i].name[strcspn(people[i].name, "\n")] = 0;
        printf("Enter age %d: ", i + 1);
        scanf("%d", &people[i].age);
        getchar();
    }
    
    file = fopen("database.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        free(people);
        return 1;
    }
    fwrite(people, sizeof(struct Person), n, file);
    fclose(file);
    
    file = fopen("database.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        free(people);
        return 1;
    }
    
    printf("\nDatabase contents:\n");
    for (int i = 0; i < n; i++) {
        fread(&people[i], sizeof(struct Person), 1, file);
        printf("%d. %s, %d years\n", i + 1, people[i].name, people[i].age);
    }
    fclose(file);
    
    free(people);
    return 0;
}