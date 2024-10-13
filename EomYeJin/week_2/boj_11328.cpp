#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
    int cnt[26];
	string str1, str2;
	cin >> N;
    bool is_possible;


    for (int i = 0; i < N; i++) {
		cin >> str1 >> str2;
        is_possible = true;
        fill(cnt, cnt+26, 0);

        for (int j = 0; j < str1.length(); j++) {
			cnt[str1[j] - 'a']++;
			cnt[str2[j] - 'a']--;
		}

		for (int k = 0; k < 26; k++) {
			if (cnt[k] != 0) {
				is_possible =  false;
                break;
			}
            
		}
		if (is_possible) cout << "Possible\n";
		else cout << "Impossible\n"; 
    }
    return 0;
}