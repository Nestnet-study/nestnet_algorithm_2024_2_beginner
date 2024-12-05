// 1010번 - 다리놓기
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long ans = 1;
        for(int i = 1; i <= n; i++){
            ans *= m - n + i;
            ans /= i;
        }
        cout << ans << '\n';
    }
}