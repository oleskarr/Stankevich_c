#include <stdio.h>

struct date {
    
    int day;
    int month;
    int year;
    
};
struct person{
    char name[50];
   struct date st;
};


int main(void){
    
    struct person s[]={
    {"anna", {11,9,2009}},
    {"serg", {07,12,2000}},
    {"rus", {04,5,1999}},
 };

 for(int i=0;i<3;i++){
    printf("%c,%d.%d.%d\n",s[i].name,s[i].st.day,s[i].st.month,s[i].st.year);
    
   
 }
 for(int i=0;i<3;i++){

    if(s[i].st.year>2000) printf("%c", s[i].name);
   
 }

}
   