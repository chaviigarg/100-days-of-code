// Q136 - Perform menu operations using enum and switch

#include <stdio.h>

enum Choice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    float a, b;

    scanf("%d", &choice);
    scanf("%f %f", &a, &b);

    switch (choice) {
        case ADD:
            printf("%.2f", a + b);
            break;

        case SUBTRACT:
            printf("%.2f", a - b);
            break;

        case MULTIPLY:
            printf("%.2f", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}