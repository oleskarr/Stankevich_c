
#include <stdio.h>

void cross(char str1[]) {
  
   char *p =str1;   
   
   int sum=0;
   int sum2=0;
    for (;*p != '\0'; p++){
       if (*p==')') sum+=1;
       else sum2+=1;
    }
        
   if (sum==sum2) printf("yes");
   else printf("no");
}

int main(void){
    char stroke[]="()()(";
    
    cross(stroke);
}