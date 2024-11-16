#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    // 배열을 오름 차 순으로 정렬하여 탐색을 간편하게 만듬
    sort(a.begin(), a.end());

    int first = 0;
    int last = n - 1;
    int count = 0;

    // 두 포인터를 사용하여 쌍을 찾기
    while (first < last) {
        int sum = a[first] + a[last];
        if (sum == x) {
            count++;
            first++;
            last--;
        } else if (sum < x) {
            first++;
        } else {
            last--;
        }
    }

    cout << count;
    return 0;
}
