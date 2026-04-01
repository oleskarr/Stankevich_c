
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    int indx;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      if(numbers[i]>sum) sum=numbers[i];
    }
    for (int i=0; i<n;i++){
      
      if(numbers[i]<sum) sum=numbers[i];
      indx=i;
    }
    printf(" minimal= %d, index= %d\n",sum ,indx);
    return 0;
}