#include <stdio.h>
#include <stdlib.h>

//qsort
int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main(void) {
    int N, k;
    scanf("%d %d", &N, &k);
    
    int scores[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }
    qsort(scores, N, sizeof(int), compare);
    
    printf("%d\n", scores[k - 1]);
    
    return 0;
}

