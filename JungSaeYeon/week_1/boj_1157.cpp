// 1157번 단어 정리
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int cnt[26] = {0,};
    for(int i=0; i<s.size(); i++){          // 입력받은 문자열 순회
        if(s[i] >= 'a') cnt[s[i]-'a']++;    // 소문자인 경우
        else cnt[s[i]-'A']++;               // 대문자인 경우 
    }

    int max = 0;                            // 최대 출현 횟수
    int idx = 0;                            // 최대 출현 횟수의 위치 
    for(int i=0; i<26; i++){
        if(cnt[i] > max){
            max = cnt[i];
            idx = i;
        }
    }

    int cnt2 = 0;                           // max와 동일한 출현 횟수 가진 알파벳 
    for(int i=0; i<26; i++){
        if(cnt[i] == max) cnt2++;
    }
    if(cnt2 > 1) cout << "?";
    else cout << (char)(idx+'A');
    return 0;
}