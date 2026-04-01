#include <stdio.h>

int main(void)
{
   int *p;
   
   
   int arr[]={0,2,4,7,8,1,8};
   p=&arr[0];
   int rra[7];
   
   
    for (int i=0; i<7; i++){
       for (p; p< arr+7 ; p++){ 
         rra[i]=*p;
         printf("%d",rra[i]);
       }
       
    }
   
    
  
   return 0;
}