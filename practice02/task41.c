#include <stdio.h>

int main(void)
{
   int n;
   int sum=1;
   
    scanf("%d", &n);
      while(n!=0){
       if (n==0) break;
        sum+=(n%10);
         n/=10;
        
    }
   
   printf("%d", sum-1);
    return 0;
}