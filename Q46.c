// Q46. Write a program to print a 5 x 5 star pattern.

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}