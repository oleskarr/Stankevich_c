
#include <stdio.h>

int main(void)
{
    int n;
    int sum=0;
    scanf("%d", &n);
   int numbers[n];
    for (int i=0; i<n;i++){
      scanf("%d", &numbers[i]);
    }
    for(int i=0; i<n;i++){
        if(numbers[i-1]<=numbers[i] && numbers[i]<=numbers[i+1]) sum+=1 ;
        
    }
    if (sum == n) printf(" = okkkkk");
    else printf("= not okkkkk");
   
   
    return 0;
}