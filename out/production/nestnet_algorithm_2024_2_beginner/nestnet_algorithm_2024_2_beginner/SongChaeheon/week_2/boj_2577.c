#include <stdio.h>

int main() {
    int i, j, k;
    long long sum; 
    int arr[10] = { 0 }; 

    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);

    sum = i * j * k;

    
    while (sum > 0) {
        int x = sum % 10;
        arr[x]++; 
        sum /= 10; 
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
