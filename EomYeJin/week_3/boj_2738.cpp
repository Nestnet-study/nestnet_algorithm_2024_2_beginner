#include <iostream>
using namespace std; 


int arr1[101][101], arr2[101][101];

int main() {
    int N, M;
    cin >> N >> M;

    for (int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr1[i][j];             
        }       
    }
    
    for (int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr2[i][j];             
        }       
    }

    for(int k=0; k<N; k++) {
        for(int l=0; l<M; l++) { 
            cout << arr1[k][l] + arr2[k][l]  << ' ';
        }
        cout << '\n';
    }

    return 0;
}