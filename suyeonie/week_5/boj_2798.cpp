// M이하 N개합의 최대 조합
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int result = 0;
    int sum = 0;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > result && sum <= M)
                    result = sum;
            }
        }
    } // 노가다 뜀...

    cout << result;

    return 0;
}