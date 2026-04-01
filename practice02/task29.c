#include <stdio.h>

int main(void)
{
    int count;
    int sum;
    int big=0;
    scanf("%d", &count);
    for( int i=0; i<count; i++ )
    {
       scanf("%d", &sum);
       if (sum>big && sum%5==0) big=sum;

    }
   printf("%d \n", big);
    return 0;
}