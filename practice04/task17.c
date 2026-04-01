#include <stdio.h>

int main(void)
{
   int *p;
   
   
   int arr[]={0,2,4,-9,8,1,8,9};
   p=&arr[0];

   for (p; p< arr+7 ; p++){
    if (*p<0){
        printf("first oneee %d" , *p);
        break;}
   }
    
  
   return 0;
}