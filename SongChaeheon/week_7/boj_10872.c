#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		factorial *= (i + 1);
	}
	printf("%d", factorial);
	return 0;
}