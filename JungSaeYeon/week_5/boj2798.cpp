// 2798번 - 블랙잭
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;                                  // 카드의 개수 N, 카드의 합 M
    vector<int> card(N);
    for (int i = 0; i < N; i++) {                   // 카드에 쓰여 있는 수 입력             
        cin >> card[i];
    }
    int result = 0;
    for (int i = 0; i < N - 2; i++) {                   // 카드 3장의 합이 M을 넘지 않는 경우 중 가장 큰 합 구하기
        for (int j = i + 1; j < N - 1; j++) {       
            for (int k = j + 1; k < N; k++) {
                int sum = card[i] + card[j] + card[k];  // 카드 3장의 합
                if (sum <= M) {
                    result = max(result, sum);
                }
            }
        }
    }
    cout << result << '\n';
    return 0;
}