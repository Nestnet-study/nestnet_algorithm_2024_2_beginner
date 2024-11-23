// 1427번 - 소트인사이드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string N;
    cin >> N;
    sort(N.begin(), N.end(), greater<int>());
    cout << N << '\n';
    return 0;
}