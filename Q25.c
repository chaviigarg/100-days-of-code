/*
Q25. Write a program to implement a basic calculator
using switch-case for +, -, *, /, %.
*/

#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}