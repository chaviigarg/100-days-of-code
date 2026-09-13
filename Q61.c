// Q61. Search for an element in an array using linear search.

#include <stdio.h>

int main()
{
    int n, a[100], key, pos = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");

    return 0;
}