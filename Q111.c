
/*
Q111. Write a C program to take an
integer array arr and an integer k.
Find the first negative integer in
each subarray of size k, moving
from left to right.
If no negative exists, print 0.
Print results separated by spaces.
*/

#include <stdio.h>

int main() {
    int n, k, ans;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for(int i = 0; i <= n-k; i++) {
        ans = 0;

        for(int j = i; j < i+k; j++) {
            if(a[j] < 0) {
                ans = a[j];
                break;
            }
        }

        printf("%d ", ans);
    }

    return 0;
}
