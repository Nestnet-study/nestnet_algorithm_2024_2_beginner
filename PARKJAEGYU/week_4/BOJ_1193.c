#include <stdio.h>

int main(void) {
    int X;
    scanf("%d", &X);

    int diagonal = 1;
    int count = 0;

    while (count + diagonal < X) {
        count += diagonal;
        diagonal++;
    }

    int offset = X - count;

    int numerator, denominator;
    if (diagonal % 2 == 1) {
        numerator = diagonal + 1 - offset;
        denominator = offset;
    } else {
        numerator = offset;
        denominator = diagonal + 1 - offset;
    }

    printf("%d/%d\n", numerator, denominator);

    return 0;
}

