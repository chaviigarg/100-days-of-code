// Q69. Find the second largest element in an array.

#include <stdio.h>

int main()
{
    int n, a[100];
    int largest, second;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -2147483648;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}