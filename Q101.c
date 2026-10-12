
/*
Q101. Write a C program to take a sorted
array and a target integer as input.
Print the index of the first and last
occurrence of the target.
If not found, print -1, -1.
*/

#include <stdio.h>

int main() {
    int n, target, first = -1, last = -1;

    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(a[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d, %d", first, last);
    return 0;
}
