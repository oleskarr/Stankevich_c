#include <stdio.h>

int main(void)
{
    int n;
   int sum=0;
    scanf("%d", &n);
    for(int i=1; i<n; i++)
    {
        for(int b=1;b<i;b++){
            sum+=b;
        }
        if(sum>10) printf("%d \n",i);
    }
   
   
    return 0;
}