#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;

    int result = 0;

    for(int M = 1; M < N; M++) {
        int sum = 0;
        int num = M;

        while (num > 0){
        sum += num % 10;
        num /= 10;
    }
        if(M + sum == N){
            result = M;
            break;
        }
    }

    cout << result << endl;
    return 0;
}