#include <stdio.h>

int main(void)
{
    int summ=0;
    int num;
    scanf("%d", &num);
    for( int i=1; i<num; i++ )
    {
        if (i % 5 ==0) summ= summ+i;
        
    }
    printf("%d \n", summ);
    return 0;
}