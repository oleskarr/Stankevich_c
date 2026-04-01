#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    for( int i=1; i<count; i++ )
    {
       if (i%17==0) {
        printf("%d \n", i);
        break;
       }
    }
   
    return 0;
}