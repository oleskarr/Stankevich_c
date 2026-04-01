#include <stdio.h>

int main(void)
{
    int num;
    
    scanf("%d", &num);
    for(int i=num ; i>=1; i= i-1 )
    {
        if (i % 4 !=0)  printf("%d \n", i) ;
    }
    ;
    return 0;
}