
/*
Q108. Write a C program to take an
integer array nums and print an array
answer such that answer[i] equals
the product of all elements except
nums[i].
Assume the product fits in 32-bit integer.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n], ans[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        ans[i] = 1;

        for(int j = 0; j < n; j++) {
            if(i != j)
                ans[i] *= a[j];
        }
    }

    printf("Output: ");
    for(int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
