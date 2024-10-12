#include <stdio.h>
#include <stdlib.h>

#define size 100000

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, key;
    int arr[size];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    qsort(arr, n, sizeof(int), compare);

    int count = 0;
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == key) {
            count++;
            left++;
            right--;
        }
        else if (sum < key) {
            left++;
        }
        else {
            right--;
        }
    }

    printf("%d", count);

    return 0;
}
