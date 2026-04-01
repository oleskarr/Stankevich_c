#include <stdio.h>

int main(void)
{
   int n;
   int sum=0;
   int b=0;
    scanf("%d", &n);
      for(int i=0; i<=n; i++){
        sum+=i;
        b=i;
        while(b!=0){
            if(b%10==5) {
                sum-=i;
                break;
            }
            b/=10;
            
        }
      }
    return 0;
}