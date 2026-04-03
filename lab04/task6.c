#include <stdio.h>

int main(void) {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];
    FILE *file;
    
    file = fopen("task6.bin", "wb");
    if (file == NULL) return 1;
    fwrite(arr1, sizeof(int), 5, file);
    fclose(file);
    file = fopen("task6.bin", "rb");
    if (file == NULL) return 1;
    fread(arr2, sizeof(int), 5, file);
    fclose(file);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}