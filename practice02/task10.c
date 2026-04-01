#include <stdio.h>

int main(void)
{
    int summ=1;
    int num;
    scanf("%d", &num);
    for( int i=1; i<num; i++ )
    {
        if (i % 3 ==0) summ= summ*i;
        
    }
    printf("%d \n", summ);
    return 0;
}