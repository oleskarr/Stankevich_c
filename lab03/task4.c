#include <stdio.h>
#include <stdlib.h>
int main(void){
    
    int n,m;
    scanf("%d",&n);
    
    int *arr= malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",arr+i);
        
    }
    scanf("%d",&m);
    int *rra=realloc(arr,m*sizeof(int));
    for (int i=n;i<m;i++){
        scanf("%d\n",rra+i);
        
    }
    
    for (int i=0;i<m+1;i++){
        printf("%d\n",*rra+i);
        
    }

 for (int i=0;i<m+1;i++){
        printf("%d",*rra+i);
        
    }

}