// 25305 번 - 커트라인
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    int arr[1000];
	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	cout << arr[N - K];
    return 0;
}