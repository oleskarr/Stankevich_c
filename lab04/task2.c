#include <stdio.h>

int main(void) {
    FILE *file = fopen("test.txt", "w");
putc('A', file);
putc('B', file);
putc('C', file);
fclose(file);
    
    file= fopen("test.txt", "r");
    
int ch;
while ((ch = getc(file)) != EOF) {
    printf("%c",ch);  
}
fclose(file);
return 1;
}