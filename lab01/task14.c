#include <stdio.h>
#include <stdint.h>

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;

    uintptr_t addr_a = (uintptr_t)&a;
    uintptr_t addr_b = (uintptr_t)&b;
    uintptr_t addr_c = (uintptr_t)&c;

    long long diff_ab = (long long)addr_b - (long long)addr_a;
    long long diff_bc = (long long)addr_c - (long long)addr_b;
    long long diff_ac = (long long)addr_c - (long long)addr_a;

    printf("a = %d, address = %p\n", a, (void *)&a);
    printf("b = %d, address = %p\n", b, (void *)&b);
    printf("c = %d, address = %p\n", c, (void *)&c);

    printf("Разница между адресами b и a: %lld байт\n", diff_ab);
    printf(" между  c и b: %lld байт\n", diff_bc);
    printf("между  c и a: %lld байт\n", diff_ac);

    return 0;
}