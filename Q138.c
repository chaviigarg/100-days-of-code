// Q138 - Print all enum names and integer values using a loop

#include <stdio.h>

enum Colors {
    RED, GREEN, BLUE, YELLOW
};

int main() {
    char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = RED; i <= YELLOW; i++)
        printf("%s = %d\n", names[i], i);

    return 0;
}