
/*
Q105. Write a C program to take an
integer array and print the majority
element (occurring more than n/2 times).
If no majority element exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, count, ans = -1;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        count = 0;

        for(int j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }

        if(count > n / 2) {
            ans = a[i];
            break;
        }
    }

    printf("Majority element = %d", ans);
    return 0;
}
