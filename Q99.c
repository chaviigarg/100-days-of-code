
#include <stdio.h>

int main() {
    int d, m, y;

    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (m >= 1 && m <= 12) {
        printf("%02d-%s-%04d", d, months[m - 1], y);
    } else {
        printf("Invalid month");
    }

    return 0;
}
