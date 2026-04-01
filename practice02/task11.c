#include <stdio.h>

int main(void)
{
    int summ=0;
    int count;
    int chisla;
    scanf("%d", &count);
    for( int i=1; i<count; i++ )
    {
        scanf("%d", &chisla);
        if (chisla>0) summ++;
        
    }
    printf("%d \n", summ);
    return 0;
}