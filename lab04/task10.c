#include <stdio.h>

int main(void) {
    FILE *file;
    long size;
    
    file = fopen("task10.txt", "rb");
    if (file == NULL) return 1;
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    printf("%ld\n", size);
    fclose(file);
    return 0;
}