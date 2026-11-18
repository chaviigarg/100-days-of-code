// Q131 - Print days of week with their enum integer values

#include <stdio.h>

enum Days {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY
};

int main() {
    char *days[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (int i = SUNDAY; i <= SATURDAY; i++)
        printf("%s = %d\n", days[i], i);

    return 0;
}