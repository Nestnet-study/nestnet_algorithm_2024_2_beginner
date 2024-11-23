#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    if(k > n/2) k = n-k;
    int result = 1;
    for(int i=1; i<=k; i++){
        result *= (n-i+1);
        result /= i;
    }
    cout << result;

}