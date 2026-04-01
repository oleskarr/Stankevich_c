#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    int inx=0;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      if(numbers[i]>sum){
         sum=numbers[i];
         inx=i;
        }
    }
    for (int i=inx+1; i<n;i++){
      numbers[i]=0;
    }
    for (int i=0; i<n;i++){
      printf("%d", numbers[i]);
    }
    
    return 0;
}