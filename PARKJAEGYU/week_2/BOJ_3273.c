#include <stdio.h>

#define MAX 100000

int main(void){

    int n;
    scanf("%d", &n); // n 개수 입력
    int a[n];

    for (int i = 0; i < n; i++) // 수열 입력
    {
        scanf("%d ", &a[i]);
    }

    int x;

    scanf("%d", &x); // x 입력

    int count = 0;
    int countarr[MAX + 1] = {0}; // 수열 순회 탐색 배열
    
    for (int i = 0; i < n; i++)
    {
        int target = x - a[i];

        if (target >=1 && target <= MAX && countarr[target] > 0) // target이 범위 안에 있고 등장 했는지 확인
        {
            count++;
        }
        
        countarr[a[i]] ++; // 현재 수를 카운트

    }
    
    

    printf("%d\n", count);


    return 0;
}
