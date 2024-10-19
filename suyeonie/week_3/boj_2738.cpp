// N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main()
{

    int arr1[101][101], arr2[101][101];
    int n, m; // 행렬 크기

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr1[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr2[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr1[i][j] + arr2[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}