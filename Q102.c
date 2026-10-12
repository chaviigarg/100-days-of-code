
/*
Q102. Write a C program to take a sorted
array and an integer x as input.
Find the ceil of x (smallest element
greater than or equal to x).
If not found, print -1.
*/

#include <stdio.h>

int main() {
    int n, x, ans = -1;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(a[i] >= x) {
            ans = a[i];
            break;
        }
    }

    printf("Ceil = %d", ans);
    return 0;
}
