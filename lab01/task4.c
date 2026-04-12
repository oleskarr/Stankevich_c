#include <stdio.h>

int main(void) {
    int a, b;

    printf(" два числа: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf(" на 0 делить низя\n");
    } else {
        printf("Остаток от деления %d на %d = %d\n", a, b, a % b);
    }
//ну слетела немного русская раскладка, ничего же?
    return 0;
}