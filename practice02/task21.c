#include <stdio.h>

int main(void)
{
    
    int count=1;
    int chislo;
    scanf("%d", &chislo);
    for( int i=1; i<=chislo; i++ )
    {
        if (i%2>0) count=count*i;

        
    }
    printf("%d \n", count);
    return 0;
}