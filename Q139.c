// Q139 - Show that enums store integers using assigned values

#include <stdio.h>

enum Numbers {
    FIRST = 5,
    SECOND = 10,
    THIRD = 15
};

int main() {
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);

    return 0;
}