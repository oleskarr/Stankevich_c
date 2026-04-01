#include <stdio.h>


void map(int arr[], int n, int (*funcs[3])(int)) {
     
   for(int i=0;i<n;i++){
    for(int b=0;b<3;b++){
    printf("%d",funcs[b](i));
    }
    printf("\n");
   }

}

int sum(int a){
    return a+1;
}
int mult(int a){
    return a*a;
}
int minus(int a){
    return a-1;
}
int main(void){
int (*q)(int) = sum;  
int (*w)(int) = mult;  
int (*e)(int) = minus;

int (*funcs[3])(int) = {q, w, e};
    int mass[5]={1,2,3,4,5};
   map(mass,5,funcs);
   
   
}