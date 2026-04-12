#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Введите целое число: ");
    scanf("%d", &n);

    printf("Последняя цифра: %d\n", abs(n % 10));

    return 0;
}