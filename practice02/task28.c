#include <stdio.h>

int main(void)
{
    int count;
    scanf("%d", &count);
    for( int i=1; i<count; i++ )
    {
        for(int b=i ;;b=b%10){
            if (b==3) break;
            else if (b==0) {
                printf("%d \n", i);
                break;
            }
        }
        
    }
   
    return 0;
}