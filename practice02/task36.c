#include <stdio.h>

int main(void)
{
    int n, i, j;
    int c=0;
    printf("n? ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        c++;
        for (j = 0; j < n; ++j){
            if(j==c) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}