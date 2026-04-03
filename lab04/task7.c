#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main(void) {
    struct Person p1 = {"Alice", 25};
    struct Person p2;
    FILE *file;
    
    file = fopen("task7.bin", "wb");
    if (file == NULL) return 1;
    fwrite(&p1, sizeof(struct Person), 1, file);
    fclose(file);
    file = fopen("task7.bin", "rb");
    if (file == NULL) return 1;
    fread(&p2, sizeof(struct Person), 1, file);
    fclose(file);
    printf("%s %d\n", p2.name, p2.age);
    return 0;
}