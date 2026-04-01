#include <stdio.h>

int main(void)
{
    int count;
    int sum=0;
    scanf("%d", &count);
    for( int i=1; i<count; i++ )
    {
       if (count%i==0) sum++;
        
    }
   printf("%d \n", sum);
    return 0;
}