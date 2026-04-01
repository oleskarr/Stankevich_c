#include <stdio.h>

int main(void)
{
   int n;
   int f=0;
   int o=0;
   int t=0;
   int th=0;
   
   
    scanf("%d", &n);
      while(n!=0){
       if(n%10==1) o+=1;
       if(n%10==2) t+=1;
       if(n%10==3) th+=1;
       if(n%10==4) f+=1;
         n/=10;
        
    }
   
  printf("1=%d \n 2=%d \n 3=%d \n 4=%d \n", o,t,th,f);
    return 0;
}