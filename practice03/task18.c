#include <stdio.h>

int main(void)
{
    int n,i;
    int sum=0;
    int a;
    scanf("%d", &n);
   int numbers[n];
    for ( i=0; i<n;i++){
      scanf("%d", &numbers[i]);
      
    }
    int sorted=0;
    while(sorted==0){
        sorted = 1;
     for( i=0; i<n;i++){
        if(numbers[i]>numbers[i+1]){
        sorted = 0;
        a= numbers[i];
        numbers[i]= numbers[i+1];
        numbers[i+1]=a;
     }
     }
    }
      for ( i=0; i<n;i++){
      printf("%d",numbers[i]);
      
    }
    printf("%d\n",sum);
    return 0;
}