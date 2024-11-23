#include <stdio.h>

#define size 1000

int main() {
    int n, k;
    int sum = 0, tmp;
    int num[size];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] < num[j + 1]) {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }

    printf("%d", num[k - 1]);
    return 0;
}