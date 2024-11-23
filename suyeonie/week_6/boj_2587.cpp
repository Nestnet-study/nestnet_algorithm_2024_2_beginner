// 대푯값2: 5개 자연수의 평균과 중앙값
#include <iostream>
using namespace std;

int main()
{
    int arr[5]; // 다섯개의 입력자연수
    int temp;   // 스왑에서 사용할 입시 저장소

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // 입력순서대로 배열에 저장

    cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << endl; // 단순 합해서 5로 나누어  평균값을 구함

    // 버블정렬후 arr[2]값이 중앙 값이다.
    for (int i = 0; i < 4; i++)
    { // 4번반복
        for (int j = 0; j < 5 - i - 1; j++)
        { // 양옆을 비교 스왑, 하나뒤로 이동해서 비교, 스왑
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << arr[2] << endl;

    return 0;
}