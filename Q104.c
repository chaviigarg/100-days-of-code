
/*
Q104. Write a C program to take a
positive integer n as input.
Find the pivot integer x such that
sum from 1 to x equals sum from x to n.
If no such integer exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, x, left, right, ans = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        left = 0;
        right = 0;

        for(int i = 1; i <= x; i++)
            left += i;

        for(int i = x; i <= n; i++)
            right += i;

        if(left == right) {
            ans = x;
            break;
        }
    }

    printf("Pivot integer = %d", ans);
    return 0;
}
