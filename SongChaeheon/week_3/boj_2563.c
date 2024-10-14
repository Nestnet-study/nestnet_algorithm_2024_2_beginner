/*
가로, 세로의 크기가 각각 100인 정사각형 모양의 흰색 도화지가 있다.
이 도화지 위에 가로, 세로의 크기가 각각 10인 정사각형 모양의 검은색 색종이를 붙인다.
이러한 방식으로 색종이를 한 장 또는 여러 장 붙인 후 
색종이가 붙은 검은 영역의 넓이를 구하는 프로그램을 작성하시오.
//색종이의 넓이는 100으로 고정,가로 10 세로 10
첫째 줄에 색종이의 수가 주어진다.
이어 둘째 줄부터 한 줄에 하나씩 색종이를 붙인 위치가 주어진다.
색종이를 붙인 위치는 두 개의 자연수로 주어지는데 
첫 번째 자연수는 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리이고
두 번째 자연수는 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리이다
색종이의 수는 100 이하이며, 색종이가 도화지 밖으로 나가는 경우는 없다
첫째 줄에 색종이가 붙은 검은 영역의 넓이를 출력한다.
//이차원 배열
*/
#include <stdio.h>

#define paper 100
#define color_paper 10

int main() {
	int n;
	int row, col;
	int width[paper][paper] = { 0 };
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &row, &col);
		for (int j = 0; j < color_paper; j++) {
			for (int k = 0; k < color_paper; k++) {
				width[row + j][col + k] = 1;
			}
		}
	}

	for (int i = 0; i < paper; i++) {
		for (int j = 0; j < paper; j++) {
			if (width[i][j] == 1)
				count++;
		}
	}

	printf("%d", count);

	return 0;
}