#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("n? ");
    int c=0;
    scanf("%d", &n);
    for (i = 1; i < n; ++i) {
        for(j=0;j<=i;j++){
            c++;
           printf("%d ", c);
            
        }
        printf(" \n");
    }
    
}