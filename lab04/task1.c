#include <stdio.h>

int main(void) {
    FILE *file;
    file=fopen("test.txt","w");
    if(file==NULL){
        perror("error");
        return 1;
    }
    printf("opened");
    fclose(file);
    return 0;
}