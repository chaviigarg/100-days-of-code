
/*
Q110. Write a C program to take an
integer array arr and an integer k.
Find the maximum element in every
contiguous subarray of size k.
Print the results separated by spaces.
*/

#include <stdio.h>

int main() {
    int n, k, max;

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
        max = a[i];

        for(int j = i+1; j < i+k; j++) {
            if(a[j] > max)
                max = a[j];
        }

        printf("%d ", max);
    }

    return 0;
}
