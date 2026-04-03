#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float avg;
    
};


int main(void) {
    struct Student s;

    scanf("%49s", s.name);
    scanf("%d", &s.age);
    scanf("%f", &s.avg);

    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Avg: %.2f\n", s.avg);

    return 0;
}