// 11050번 - 이항 계수 1
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << factorial(N) / (factorial(K) * factorial(N - K)) << '\n';
    return 0;
}