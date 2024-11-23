#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int blk = 1;

    for (int i = 0; i < n; i++)
    {
        blk *= 2;
    }
    printf("%d\n", blk);
    return 0;
}