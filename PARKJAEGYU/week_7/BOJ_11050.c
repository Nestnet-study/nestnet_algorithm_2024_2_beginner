#include <stdio.h>

int factorial(int n){
if (n == 0 || n == 1)
{
    return 1;
}

else
    return n * factorial(n - 1);


}

int main(void){

    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d", factorial(n) / (factorial(k) * factorial(n-k)));

    return 0;
}
