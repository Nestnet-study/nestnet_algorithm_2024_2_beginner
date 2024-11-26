#include <iostream>
using namespace std;

long long conbi (int N, int K){
    int result = 1;
    for(int i = 0; i < K; i++) {
        result *= (N - i);
        result /= (i + 1);
    }
    return result;
}

int main() {

    int N, K;
    cin >> N >> K;

    cout << conbi(N, K) << endl;

    return 0;
}