#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0; 

    int area[100][100] = { 0, }; // 주어진 종이판 크기의 배열을 선언 후 0으로 초기화
    for (int i = 0; i < n; i++)
    {
        int a, b = 0;
        cin >> a >> b;
        for (int j = a; j < a + 10; j++)
        {
            for (int k = b; k < b + 10; k++)
            {
                area[j][k] = 1; // 주어진 좌표에 해당하는 값을 1로 업데이트
            }
        }
    }

    for(int x = 0; x < 100; x++){
        for(int y = 0; y < 100; y++){
            if(area[x][y] == 1) // 배열에서 1의 개수와 색종이의 면적은 같기 때문에 개수 카운트
            result++; 
        }
    }

    cout << result;
}