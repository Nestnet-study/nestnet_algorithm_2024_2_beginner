#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int card[100];
    for (int i = 0; i < N; i++){
        cin >> card[i];
    }

    int sum;
    int sumMax = 0;

    for(int i = 0; i < N-2; i++) {
        for(int j = i + 1; j < N-1; j++) {
            for(int k = j + 1; k < N; k++) {
                sum = card[i]+card[j]+card[k];
                if (sum <= M ) {
                    if(sum > sumMax) {
                       sumMax = sum; 
                    }
                }
            }
        }
    }
    cout << sumMax <<endl;
    return 0;

}