#include <stdio.h>

int main() {
    int kg;
    scanf("%d", &kg);

    int total = -1;

    for (int i = kg / 5; i >= 0; i--) {
        int remain = kg - (i * 5);
        if (remain % 3 == 0) {
            total = i + (remain / 3); 
            break;
        }
    }

    printf("%d", total); 
    return 0;
}