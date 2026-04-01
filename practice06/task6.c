#include <stdio.h>

int fact(int n,int b,int kon) {
    int c;
   
    for(;b<=kon;){
        c=b;
        b+=n;
        n=c;
        printf("%d\n",b);
    }
}



int main(void){

     fact(1,1,34);
   
}