#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int avg;
};
int main(void) {
    struct Student s[]={{"rus",7,5},{"max",8,10},{"oles",4,12}};
   int max=0;
   for(int i=0;i<3;i++){
    printf("%c,%d,%d \n",s[i].name,s[i].age,s[i].avg);
    if(s[i].avg>max) max=i;
   }
   printf("%d",s[max].avg);

    
   
    
    

    return 0;
}