#include <stdio.h>

int main(void)
{
   int *p;
   
   int x=5;
   int arr[]={0,2,4,7,8,1,8,9};
   p=arr;
    int sum=0;
    int m= sizeof(arr)/sizeof(arr[0]);
   
    for (p; p< arr+m; p++){
    if(*p>x) sum+=1;

   }
   printf("%d", sum);
    
  
   return 0;
}