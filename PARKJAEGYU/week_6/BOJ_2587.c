#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("%d\n", sum / 5);

    qsort(numbers, 5, sizeof(int), compare);

    printf("%d\n", numbers[2]);

    return 0;
}

