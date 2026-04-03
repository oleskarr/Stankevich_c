#include <stdio.h>
enum Weekday {
    MONDAY,     // = 0
    TUESDAY,    // = 1
    WEDNESDAY,  // = 2
    THURSDAY,   // = 3
    FRIDAY,     // = 4
    SATURDAY,   // = 5
    SUNDAY      // = 6
};
struct yes{
  enum Weekday wkd;
};
int main(void){
    struct yes y;
    y.wkd=SUNDAY;
     printf("WKD: ");
    switch(y.wkd) {
        case MONDAY:
            printf("Понедельник\n");
            break;
        case TUESDAY:
            printf("Вторник\n");
            break;
        case WEDNESDAY:
            printf("Среда\n");
            break;
        case THURSDAY:
            printf("Четверг\n");
            break;
        case FRIDAY:
            printf("Пятница\n");
            break;
        case SATURDAY:
            printf("Суббота\n");
            break;
        case SUNDAY:
            printf("SUNNEYYY\n");
            break;
    }
}