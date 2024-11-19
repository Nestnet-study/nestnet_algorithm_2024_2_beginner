#include <iostream>
using namespace std;

int main() {
    int N, k;
    int score[1000];
    cin >> N >> k;

    for( int i = 0; i < N; i++) {
        cin >> score[i];
    }

    int temp;
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-i-1; j++) {
            if(score[j] > score[j+1]) {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            } 
        }
    }
    cout << score[N-k] << endl;
    return 0;
}

