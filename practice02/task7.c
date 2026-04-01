#include <stdio.h>

int main(void)
{
    int num;
    int summ=0;
    scanf("%d", &num);
    for( int i=1; i<num; i++ )
    {
        summ=i*i;
        if (summ>50) printf("%d \n ", summ);
    }
     
    return 0;
}