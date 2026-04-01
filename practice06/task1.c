
#include <stdio.h>

void cross(int mass1[], int mass2[]) {
    for(int i=0; i<5; i++){
        for(int b=0; b<5;b++){
            if (mass1[i]==mass2[b])
            {
                printf("%d", mass2[b]);
            }
        }
    }
}

int main(void){
    int m1[5]={1,2,3,4,5};
    int m2[5]={1,2,3,4,5};
    
    cross(m1, m2);
}