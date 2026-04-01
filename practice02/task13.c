#include <stdio.h>

int main(void)
{
    
    int count;
    int chisla;
    int counter=0;
    scanf("%d", &count);
    int kol [count];
    for( int i=0; i<count; i++ )
    {
        scanf("%d", &chisla);
        if (chisla>10) 
        {
            kol[counter]=chisla ;
            counter++;
        }
    }
    for(int b =0; b < count; b++)
    {
        printf(" %d \n", kol[b]);
    }
    
    return 0;
}