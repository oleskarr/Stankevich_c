#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    int newValue;
    scanf("%d", &pos);
    scanf("%d", &newValue);
    n++;
    arr = realloc(arr, n * sizeof(int));
    for (int i = n - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newValue;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}