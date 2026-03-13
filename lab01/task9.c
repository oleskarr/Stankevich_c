#include <stdio.h>

int main(void) {
    int x;
    int result1, result2;

    printf("Введите x: ");
    scanf("%d", &x);

    result1 = x * x + 2 * x + 1;
    result2 = (x + 1) * (x + 1) - (x - 1) * (x - 1);

    printf("x^2 + 2x + 1 = %d\n", result1);
    printf("(x + 1)^2 - (x - 1)^2 = %d\n", result2);

    return 0;
}