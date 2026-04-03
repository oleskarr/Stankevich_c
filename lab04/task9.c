#include <stdio.h>

int main(void) {
    FILE *file;
    char str[100];
    
    file = fopen("task9.txt", "w");
    if (file == NULL) return 1;
    fprintf(file, "Hello World");
    fclose(file);
    file = fopen("task9.txt", "r");
    if (file == NULL) return 1;
    fseek(file, 6, SEEK_SET);
    fgets(str, 100, file);
    printf("%s\n", str);
    fclose(file);
    return 0;
}