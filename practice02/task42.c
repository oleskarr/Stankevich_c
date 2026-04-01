#include <stdio.h>

int main(void)
{
   int n;
   int sum=1;
   
    scanf("%d", &n);
      while(n!=0){
       if (n%10==0){
        while(n%10==0){
            n/=10;
        }
       } 
        sum*=(n%10);
         n/=10;
        
    }
   
   printf("%d", sum);
    return 0;
}