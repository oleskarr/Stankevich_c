#include <stdio.h>

int main(void) {
    int x = 2147483647;

    printf("До: %d\n", x);

    x = x + 1;

    printf("После: %d\n", x);

    return 0;
}