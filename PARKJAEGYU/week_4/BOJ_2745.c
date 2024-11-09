#include <stdio.h>
#include <stdlib.h>

int main() {
    char N[31];
    int B;
    
    scanf("%s %d", N, &B);
    
    long decimal_value = strtol(N, NULL, B);
    
    printf("%ld\n", decimal_value);
    
    return 0;
}

