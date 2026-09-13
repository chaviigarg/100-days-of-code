// Q68. Delete an element from an array.

#include <stdio.h>

int main()
{
    int n, a[100], element, pos = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == element)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        for(int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for(int i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}