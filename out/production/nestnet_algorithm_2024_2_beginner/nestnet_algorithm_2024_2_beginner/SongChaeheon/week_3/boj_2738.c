#include <stdio.h>

#define size 100

int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[size][size], brr[size][size], crr[size][size];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}