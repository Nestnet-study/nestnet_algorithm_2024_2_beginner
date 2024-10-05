#include <stdio.h>
int main() {
	int i, j;
	int count = 1;
	int arr[9];
	for (i = 0; i < 9; i++) {
		scanf("%d", &(arr[i]));
	}
	int max = arr[0];
	for (j = 0; j < 9; j++) {
		if (arr[j] > max) {
			max = arr[j];
			count = j + 1;
		}



	}
	printf("%d\n", max);
	printf("%d\n", count);

	return 0;
}