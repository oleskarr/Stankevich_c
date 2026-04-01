#include <stdio.h>

int main(void)
{
   int *p;
   
   
   int arr[]={0,2,4,7,8,1,8};
   p=&arr[0];
   int sum=0;
   for (p; p< arr+7 ; p++){

    sum+=*p;
   }
    printf("%d", sum);
  
   return 0;
}