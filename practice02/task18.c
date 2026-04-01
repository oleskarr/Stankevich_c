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
        if(chisla%7 ==0) differ++;
        
        
    }
    printf("%d \n", differ);
    return 0;
}