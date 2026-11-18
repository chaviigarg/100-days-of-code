// Q132 - Display traffic light message using enum

#include <stdio.h>

enum TrafficLight {
    RED, YELLOW, GREEN
};

int main() {
    enum TrafficLight light;

    scanf("%d", &light);

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid");
    }

    return 0;
}