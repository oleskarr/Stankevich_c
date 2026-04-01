
#include <stdio.h>
#include <string.h>
void cross(char str1[], char str2[]) {
  
   char *p =str1;   
   char *d=str2;
   int sum=strlen(str2);
   int ha=0;
   
    for (;p != str1+sum; p++){
        for (;*d != '\0'; d++){
       if(*p==*d){
        ha+=1;
        p++;
    }

    }
       if (ha==sum) {
        ha=*p;
        break;
       }
       else {
        p-=ha;
        p+=1;
        
    }
    }
  printf("%d", ha);

   
}

int main(void){
    char stroke[]="hey world";
    char stro[]="world";
    
    cross(stroke,stro);
}