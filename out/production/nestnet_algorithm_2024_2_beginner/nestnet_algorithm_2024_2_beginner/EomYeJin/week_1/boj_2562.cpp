#include <stdio.h>

int main() {
    int num;
    int max = 0;
    int pos = 0;

    for (int i = 0; i < 9; i++){
        scanf("%d", &num);

        if(num > max) {
            max = num;
            pos = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos);
    
    return 0;
}