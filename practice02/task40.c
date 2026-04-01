#include <stdio.h>

int main(void)
{
    int n;
  
    scanf("%d", &n);
    for(int i=3; i<n; i++)
    {
       for(int b=2;b<=i; b++ ){
        
        if(i%b==0){ 
          break;
          }
          else if (b=i-1){
            printf("%d -simp \n", i);
            break;
          }
        

        }
        
      }
   
   
    return 0;
}