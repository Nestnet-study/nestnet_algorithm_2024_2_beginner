// 11328번 Strfry
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        int cnt[26] = {0,};
        for (int j = 0; j < a.size(); j++) {
            cnt[a[j] - 'a']++;
            cnt[b[j] - 'a']--;
        }
        bool flag = true;
        for (int j = 0; j < 26; j++) {
            if (cnt[j] != 0) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Possible" : "Impossible") << '\n';
    }
    return 0;
}