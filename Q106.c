
/*
Q106. Write a C program to find the
next greater element for each element
of an array.
The next greater element is the nearest
greater element on the right.
If none exists, print -1.
Use nested loops, not stack.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int ans = -1;

        for(int j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }

        if(i > 0)
            printf(", ");
        printf("%d", ans);
    }

    return 0;
}
