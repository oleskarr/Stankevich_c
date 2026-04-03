#include <stdio.h>

int main(void) {
    FILE *file = fopen("test.txt", "w");
     char buffer[100];
 fprintf(file, "firrrstttt\n");
    fprintf(file, "secccc\n");
    fclose(file);

    
 file = fopen("test.txt", "r");
    if (file == NULL) {
        return 1;
    }
    
    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}