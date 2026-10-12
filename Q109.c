
/*
Q109. Write a C program to take an
integer array arr and an integer k.
Print the maximum sum of any
contiguous subarray of size k.
*/

#include <stdio.h>

int main() {
    int n, k, sum, max;

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

    max = 0;
    for(int i = 0; i < k; i++)
        max += a[i];

    for(int i = 1; i <= n-k; i++) {
        sum = 0;

        for(int j = i; j < i+k; j++)
            sum += a[j];

        if(sum > max)
            max = sum;
    }

    printf("Maximum sum = %d", max);
    return 0;
}
