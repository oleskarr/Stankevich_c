#include <stdio.h>

struct rectangle {
    
    int height;
    int width;
};
int s(int a,int b){
    return a*b;
}
int p(int a,int b){
    return (a+b)*2;
}

int main(void){
    
    struct rectangle sp[]={
    {10,10},
    {8,10},
    {8,8},
 };

 for(int i=0;i<3;i++){
    
  int a=s(sp[i].width,sp[i].height) ; 
   printf("%d,",a);
int b=p(sp[i].width,sp[i].height) ; 
   printf("%d \n",b);
 }


}
   