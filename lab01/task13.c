#include <stdio.h>

int main(void) {
    int total_seconds;
    int hours, minutes, seconds;

    printf("количество секунд с начала суток: ");
    scanf("%d", &total_seconds);

    if (total_seconds < 0 || total_seconds >= 86400) {
        printf("от 0 до 86399.\n");
        return 0;
    }

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}