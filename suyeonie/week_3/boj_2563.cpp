#include <iostream>
using namespace std;

int main()
{
    int arr[101][101] = {0}; // 도화지를 1X1로 쪼갬
    int n, a, b;
    int area = 0;

    cin >> n;
    for (int k = 0; k < n; k++)
    { // 종이 하나 입력
        cin >> a >> b;

        for (int i = a; i < a + 10; i++)
        { // 10X10칸색칠
            for (int j = b; j < b + 10; j++)
            {
                if (arr[i][j] == 0)
                {
                    arr[i][j] = 1;
                    area++;
                }
            }
        }
    }

    cout << area;

    return 0;
}