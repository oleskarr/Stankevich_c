#include <stdio.h>

int main(void) {
    FILE *file = fopen("test.txt", "w");
     char buffer[100];
fputs("firrrstttt",file);
fputs("secccc",file);
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