#include <stdio.h>
#include <string.h>

#define size 1001

int main() {
	char str[size];
	int arr[size];
	int tmp;

	scanf("%s", str);

	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		arr[i] = str[i] - '0';
	}

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < length; i++)
		printf("%d", arr[i]);
  
	return 0;
}