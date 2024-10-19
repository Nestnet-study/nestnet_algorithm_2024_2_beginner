#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;

    // 각 숫자의 개수를 세기 위한 배열
    int digit_count[10] = {0}; // 0부터 9까지의 숫자 개수

    // 숫자의 각 자리수를 세기
    while (num > 0) {
        int new_num = num % 10; // 가장 오른쪽 자리수
        digit_count[new_num]++; // 해당 숫자 개수 증가
        num /= 10; // 다음 자리수로 이동
    }

    // 6과 9의 처리
    int six_nine_count = digit_count[6] + digit_count[9];
    // 6과 9는 하나의 세트로 처리, 올림을 위해 +1을 후속 처리
    int required_sets = (six_nine_count + 1) / 2;

    // 다른 숫자들 중 최대 개수를 구함
    for (int i = 0; i < 10; i++) {
        if (i != 6 && i != 9) { // 6과 9 제외
            required_sets = max(required_sets, digit_count[i]);
        }
    }

    cout << required_sets; // 필요한 세트의 개수 출력
    return 0;
}
