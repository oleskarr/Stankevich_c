
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; ;i++){
    if(i==n) {
        numbers[0]=numbers[i];
        break;
    }
     scanf("%d", &numbers[i+1]);
      
    }
     for (int i=0; i<n;i++){
    printf("%d", numbers[i]);
      
    }

    
    return 0;
}