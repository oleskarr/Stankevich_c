#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int hundreds, tens, ones;

    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    n = abs(n);

    hundreds = n / 100;
    tens = (n / 10) % 10;
    ones = n % 10;

    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", ones);

    return 0;
}