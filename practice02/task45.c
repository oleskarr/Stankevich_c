#include <stdio.h>

int main(void)
{
   int n;
   int sum=1;
   
    scanf("%d", &n);
      while(n!=0){
       if ((n%10)%2==0){
        printf("counted nums \n");
        break;
       }
       else printf("still ok \n");
         n/=10;
        
    }
   
  
    return 0;
}