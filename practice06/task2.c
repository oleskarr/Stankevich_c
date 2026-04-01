
#include <stdio.h>

void cross(char str1[]) {
  
   char *p =str1;   
    
   int sum=0;
    for (;*p != '\0'; p++){
        if (*p== ' ') break;
    }
     for (;*p != '\0'; p++){
        sum++;
        printf("%c",*p);
    }
    p=str1;
     for (;*p != '\0'; p++){
        if (*p== ' ') break;
         printf("%c",*p);
    }
    
    
   
}

int main(void){
    char stroke[]="hello world";
    
    cross(stroke);
}