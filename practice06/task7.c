#include <stdio.h>


void map(int arr[], int n, int (*f)(int)) {
     
    for(int i=0;i<n;i++){
    
      printf("%d \n",f(arr[i]));
    }

  

}

int sum(int a){
    return a+1;
}

int main(void){


    int mass[5]={1,2,3,4,5};
   map(mass,5,sum);
   
   
}