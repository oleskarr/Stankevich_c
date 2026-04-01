#include <stdio.h>

int main(void)
{
    int count;
    int sum;
    int big=0;
    
    for( int i=1; i<=10; i++ )
    {
      for(int b=1; b<10 ;b++){
        sum = b*i;
        if (sum<=50) printf("%d \n", sum);
        else break;
      } 

    }
   
    return 0;
}