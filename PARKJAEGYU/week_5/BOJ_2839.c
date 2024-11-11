#include <stdio.h>
int main(void){

    int n;

    scanf("%d", &n);

    int count = n / 5;

    while (count >= 0)
    {
        int remain = n - (count * 5);
        if (remain % 3 == 0)
        {
            printf("%d\n", count + (remain / 3));
            return 0;
        }
        count --;
    }

    printf("-1\n");
    return 0;
}


