#include <stdio.h>

#define size_1 16
#define size_2 75

int main() {
    char str[5][size_1] = { '\0' };
    char sto[size_2] = { '\0' };
    int index = 0;



    for (int i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }


    for (int i = 0; i < size_1; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[j][i] != '\0') {
                sto[index++] = str[j][i];

            }
        }
    }

    sto[index++] = '\0';

    printf("%s", sto);

    return 0;
}