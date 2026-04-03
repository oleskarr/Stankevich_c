#include <stdio.h>

int main(void) {
    FILE *file;
    char ch;
    
    file = fopen("task11.txt", "r");
    if (file == NULL) return 1;
    while (1) {
        ch = fgetc(file);
        if (feof(file)) break;
        if (ferror(file)) return 1;
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}