#include <stdio.h>

int main(void) {
    FILE *file;
    char str[200];
    
    fgets(str, 200, stdin);
    file = fopen("task5.txt", "w");
    if (file == NULL) return 1;
    fprintf(file, "%s", str);
    fclose(file);
    file = fopen("task5.txt", "r");
    if (file == NULL) return 1;
    while (fgets(str, 200, file) != NULL) {
        printf("%s", str);
    }
    fclose(file);
    return 0;
}