// Q134 - Print messages for SUCCESS, FAILURE and TIMEOUT

#include <stdio.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    enum Status status;

    scanf("%d", &status);

    switch (status) {
        case SUCCESS:
            printf("Success");
            break;

        case FAILURE:
            printf("Failure");
            break;

        case TIMEOUT:
            printf("Timeout");
            break;

        default:
            printf("Invalid Status");
    }

    return 0;
}