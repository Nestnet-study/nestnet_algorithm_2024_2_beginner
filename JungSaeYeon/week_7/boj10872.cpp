// 10872 번 - 팩토리얼
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << factorial(N) << '\n';
    return 0;
}