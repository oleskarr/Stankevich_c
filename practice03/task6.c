
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      if(numbers[i]<0) numbers[i]=0;
    }
   for(int i=0;i<n;i++){
    printf(" %d", numbers[i]);
   }
   
    return 0;
}