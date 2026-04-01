
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    int kol=0;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      sum+=numbers[i];
    }
    sum/=n;
    printf("summa= %d \n",sum);
    
    for (int i=0; i<n;i++){
      if(numbers[i]>sum) kol+=1;
      
    }
    printf("%d", kol);
    return 0;
}