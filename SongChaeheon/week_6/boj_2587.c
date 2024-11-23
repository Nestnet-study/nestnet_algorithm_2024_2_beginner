#include <stdio.h>

int main() {
    int sum = 0, tmp;
    int num[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }

    printf("%d\n", sum / 5);

    printf("%d", num[2]);

    return 0;
}