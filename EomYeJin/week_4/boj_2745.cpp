#include <iostream>
using namespace std;

int main() {
    string N;
    int B;
    long long result = 0;

    cin >> N >> B;
    
    for(int i = 0; i<N.length(); i++) {
        int value;

        if (N[i] >= '0' && N[i] <= '9') {
            value = N[i] - '0';
        } else {
            value = N[i] -'A' + 10;
        }
        result = result *B + value;
    }
    cout << result;
    return 0;
        
}