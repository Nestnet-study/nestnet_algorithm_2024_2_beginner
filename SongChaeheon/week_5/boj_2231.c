#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int generator = 0;

    
    for (int i = 1; i < n; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10; 
            temp /= 10; 
        }

        
        if (sum == n) {
            generator = i;
            break; 
        }
    }

    printf("%d", generator);
    return 0;
}