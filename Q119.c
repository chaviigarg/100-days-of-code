// Q119 - Find the repeated element in one iteration

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[1000] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (count[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        count[arr[i]]++;
    }

    return 0;
}