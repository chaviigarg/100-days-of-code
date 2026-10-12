
/*
Q103. Write a C program to take an
integer array as input and find the
leftmost pivot index where the sum
of elements to the left equals the
sum of elements to the right.
If no pivot exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, total = 0, left = 0, pivot = -1;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(int i = 0; i < n; i++) {
        total -= a[i];

        if(left == total) {
            pivot = i;
            break;
        }

        left += a[i];
    }

    printf("Pivot index = %d", pivot);
    return 0;
}
