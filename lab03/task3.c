#include <stdio.h>
#include <stdlib.h>

void max(int n,int *a){
    int sum=0;
for (int i=0;i<n;i++){
        if (*a>sum)sum=*a;
        a++;
    }
    printf("%d\n",sum);
}
void min(int n,int *a){
    int sum=3333;
for (int i=0;i<n;i++){
        if (*a<sum)sum=*a;
        a++;
    }
    printf("%d\n",sum);
}
void summ(int n,int *a){
    int sum=0;
for (int i=0;i<n;i++){
        sum+=*a;
        a++;
    }
    printf("%d\n",sum);
}

int main(void){
    
    int n;
    scanf("%d",&n);
    int *arr= malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&*arr);
        arr++;
    }
    arr-=n;
   max(n,arr);
   min(n,arr);
   summ(n,arr);

}