#include<iostream>
using namespace std;

// 조합 계산 함수 (팩토리얼 직접 계산 대신 최적화)
long long combination(int n, int r) {
    if (r > n / 2) r = n - r; // C(n, r) == C(n, n-r)
    long long result = 1;
    for (int i = 1; i <= r; i++) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    int n[t], m[t];
    long long rest[t]; // 결과를 저장할 배열
    for (int i = 0; i < t; i++) {
        cin >> n[i] >> m[i];
        rest[i] = combination(m[i], n[i]); // 최적화된 조합 계산
    }
    for (int i = 0; i < t; i++) {
        cout << rest[i] << endl; // 결과 출력
    }
    return 0;
}
