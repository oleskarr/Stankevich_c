#include <stdio.h>

int main(void)
{
    
    int count;
    int chisla;
    int differ=0;
    scanf("%d", &count);
    for( int i=1; i<count; i++ )
    {
        scanf("%d", &chisla);
        if(chisla>differ) differ=chisla;
        
        
    }
    printf("%d \n", differ);
    return 0;
}