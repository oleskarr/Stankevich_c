#include <stdio.h>
#include <stdlib.h>
int main(void){
    
    int n;
    scanf("%d",&n);
    int *arr= malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&*arr);
        arr++;
    }
    arr-=n;
    for (int i=0;i<n;i++){
        printf("%d\n",*arr);
        arr++;
    }

}