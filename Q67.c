// Q67. Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int n, a[101], element, position;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);
    scanf("%d", &position);

    for(int i = n; i >= position; i--)
        a[i] = a[i - 1];

    a[position - 1] = element;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}