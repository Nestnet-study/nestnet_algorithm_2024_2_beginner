#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int result = 1;

    while(N > 1) {
        result *= N;
        N--;
    }
    cout << result <<endl;
    return 0;
}