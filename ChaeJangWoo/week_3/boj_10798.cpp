#include <iostream>

using namespace std;

char arr[5][15];

int main() {

	for (int i = 0; i < 5; i++)
		cin >> arr[i]; // 5x15짜리 배열의 각 행에 문자 입력

	for (int i = 0; i < 15; i++) {
		for (int k = 0; k < 5; k++) {
			if(arr[k][i] != '\0') // 이후 널 값이 아니면 세로로 출력
				cout << arr[k][i];
		}
	}

	return 0;
}