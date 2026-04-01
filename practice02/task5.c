#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    for( int i=1; i<num; i++ )
    {
        if (i % 3 ==0) printf("fizz \n");
        else printf("%d \n", i);
    }
    return 0;
}