#include <stdio.h>

int main(void)
{
    int num;
    int summ=0;
    scanf("%d", &num);
    for( int i=1; i<num; i++ )
    {
        if (i % 2 != 0) summ+=1;
    }
     printf("%d \n", summ);
    return 0;
}