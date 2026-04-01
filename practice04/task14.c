#include <stdio.h>

int main(void)
{
   int *p;
   
   
   int arr[7]={0,2,4,7,8,1,8};
  
   int sum=0;
   
   for (p=&arr[0]+sizeof(arr)/sizeof(arr[0]); p>=arr ; p--){
    printf("%d", *p);
   }
    
  
   return 0;
}