
#include <stdio.h>

int main(void)
{
    int n;
    int max=0;
    int minmax;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      if(numbers[i]>max) {
        minmax=max;
        max=numbers[i];
    }
    } 
    printf("%d\n",minmax);
    return 0;
}