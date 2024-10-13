#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    string a, b;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int al[26] = {};
        cin >> a >> b;

        // 문자열 a의 각 문자에 대해 알파벳 출현 빈도 증가
        for (auto c : a)
            al[c - 'a']++;
        // 문자열 b의 각 문자에 대해 알파벳 출현 빈도 감소
        for (auto c : b)
            al[c - 'a']--;

        bool isPossible = true;
        // 모든 알파벳의 출현 빈도가 0인지 확인
        for (int i : al)
        {
            if (i != 0) // 하나라도 0이 아닌 경우 불가능
                isPossible = false;
        }

        // 결과 출력
        if (isPossible)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}
