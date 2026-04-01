#include <stdio.h>

int main(void)
{
    int n, i;

    printf("n? ");
    
    scanf("%d", &n);
    int j=n;
    for (i = 1; i < n; ++i) {
        for(;j>0;j=j-1){
            
            printf("* ");
            
        }
        printf(" \n");
    }
    return 0;
}