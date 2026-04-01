#include <stdio.h>

int main(void)
{
   int *p;
   
   
   int arr[]={0,2,4,7,8,1,8,9};
   p=&arr[0];

   for (p; p< arr+7 ; p++){
    printf("%d", *p);
   }
    
  
   return 0;
}