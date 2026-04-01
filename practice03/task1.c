
#include <stdio.h>

int main(void)
{
    int n;
    int numbers[10];
    scanf("%d", &n);
   
    for (int i=0; i<10;i++){
      scanf("%d", &numbers[i]);
    }
    for(int i=9; i>1;i--){
      
      printf("numbers[%d] =%d \n",i+1, numbers[i]);
    }
}