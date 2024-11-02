#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n == 1) {
        printf("1");
        return 0;
    }

    int i = 0;
    while (1) {
        int max = 1 + 3 * i * (i + 1);

        if (n <= max) {
            printf("%d", i + 1);
            break;
        }
        i++;
    }

    return 0;
}
