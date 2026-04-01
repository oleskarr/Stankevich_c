#include <stdio.h>

int main(void)
{
    int summ=0;
    int i;
    while(i!=0)
    {
        scanf("%d" ,&i);
        if (i>0) summ+=i;

    }
    printf("%d \n", summ);
    return 0;
}