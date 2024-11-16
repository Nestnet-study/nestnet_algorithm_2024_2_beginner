#include <stdio.h>
#include <string.h>

#define size 10001
int main() {
    char str[size];
    int b;
    int result = 0;

    scanf("%s %d", str, &b);      

    int length = strlen(str);        

    for (int i = 0; i < length; i++) {
        int d;
        if (str[i] >= '0' && str[i] <= '9') {
            d = str[i] - '0';     
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            d = str[i] - 'A' + 10;
        }

        int sum = 1;
        for (int j = 0; j < (length - 1 - i); j++) {
            sum *= b;
        }

        result += d * sum;
    }

    printf("%d", result);

    return 0;
}