#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 10;
    int c;

    printf("До обмена: a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("После обмена: a = %d, b = %d\n", a, b);

    return 0;
}