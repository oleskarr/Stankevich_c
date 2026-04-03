#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main(void) {
    int n = 3;
    struct Person people1[3] = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    struct Person people2[3];
    FILE *file;
    
    file = fopen("task8.bin", "wb");
    if (file == NULL) return 1;
    fwrite(people1, sizeof(struct Person), n, file);
    fclose(file);
    file = fopen("task8.bin", "rb");
    if (file == NULL) return 1;
    fread(people2, sizeof(struct Person), n, file);
    fclose(file);
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", people2[i].name, people2[i].age);
    }
    return 0;
}