// Q41. Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, first, last, temp, power = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    middle = (n % power) / 10;

    n = last * power + middle * 10 + first;

    printf("Number after swapping = %d", n);

    return 0;
}