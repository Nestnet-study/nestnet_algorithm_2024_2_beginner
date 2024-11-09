// B진법수->10진법

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    string N;
    int B;

    cin >> N >> B;

    int leng = N.length();
    int sum = 0;

    for (int i = 0; i < leng; i++)
    {
        int t = N[leng - (i + 1)]; // 뒷쪽 가장 작을 자릿 수 부터
        if (t >= '0' && t <= '9')  // 0~9,까지
            t = t - '0';
        else // 10~B-1까지
            t = t + 10 - 'A';
        sum += (t * pow(B, i)); // B의 i제곱
    }
    cout << sum << endl;

    return 0;
}