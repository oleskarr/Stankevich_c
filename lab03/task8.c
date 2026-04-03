#include <stdio.h>
#include <stdlib.h>

void add(int **arr, int *size, int *cap, int val) {
    if (*size == *cap) {
        *cap *= 2;
        *arr = realloc(*arr, *cap * sizeof(int));
    }
    (*arr)[*size] = val;
    (*size)++;
}

void delete(int **arr, int *size, int *cap, int idx) {
    if (idx < 0 || idx >= *size) return;
    for (int i = idx; i < *size - 1; i++) {
        (*arr)[i] = (*arr)[i + 1];
    }
    (*size)--;
    if (*size > 0 && *size == *cap / 2) {
        *cap /= 2;
        *arr = realloc(*arr, *cap * sizeof(int));
    }
}

void print(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int size = 0;
    int cap = 2;
    int *arr = malloc(cap * sizeof(int));
    int choice, val, idx;
    
    void (*actions[4])(int**, int*, int*, int) = {add, delete, NULL, NULL};
    
    while (1) {
        printf("\n1.Add 2.Delete 3.Print 4.Exit\n");
        scanf("%d", &choice);
        
        if (choice == 1) {
            scanf("%d", &val);
            add(&arr, &size, &cap, val);
            printf("Added %d\n", val);
        }
        else if (choice == 2) {
            scanf("%d", &idx);
            delete(&arr, &size, &cap, idx);
            printf("Deleted\n");
        }
        else if (choice == 3) {
            print(arr, size);
        }
        else if (choice == 4) {
            break;
        }
    }
    
    free(arr);
    return 0;
}