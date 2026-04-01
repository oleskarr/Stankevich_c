
#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        printf("%d ", 1);
        return 1;   
    }

    int res = fib(n - 2) + fib(n - 1);

    return res;
}

int main(void){
    
    int a = fib(6);
    printf("%d", a);
}
