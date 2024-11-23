#include <iostream>
using namespace std;

long long combi(int N, int M){
    long long result = 1;
    for (int  i = 0; i < N; i++){
        result *= M-i;
        result /= i+1;
    }
    return result;
} 

 int main() {
    int T;
    cin >> T;
    int N[T],  M[T];

    for(int t = 0; t < T; t++){
        cin >> N[t] >> M[t];
    }

   for(int t = 0; t < T; t++) {
    cout << combi(N[t], M[t]) << endl;
   }
    return 0;
 }