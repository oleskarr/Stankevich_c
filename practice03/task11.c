
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    int num;
    scanf("%d", &n);
    int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      
    }
    scanf("%d", &num);
    for (int i=0; i<n;i++){
      if(numbers[i]==num) sum+=1;
      
    }
    printf("answer is : %d",sum);
   
    return 0;
}