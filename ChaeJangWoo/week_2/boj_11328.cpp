#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> result(n);
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) { 
            result[i] = "Possible"; // 결과 저장
        } else {
            result[i] = "Impossible"; // 결과 저장
        }
    }

    for(int i = 0; i < n; i++){
        cout << result[i] << endl;
    }
}