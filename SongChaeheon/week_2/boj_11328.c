#include <stdio.h>
#include <string.h>
#define size 1001
int main() {
	int n;
	int count = 0;
	char str[size];
	char fry[size];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", str, fry);
		
		int count_str[26] = { 0 };
		int count_fry[26] = { 0 };

		for (int j = 0; str[j] != '\0'; j++) {
			count_str[str[j] - 'a']++;
		}

		for (int j = 0; fry[j] != '\0'; j++) {
			count_fry[fry[j] - 'a']++;
		}

		int possible = 1; 

		for (int j = 0; j < 26; j++) {
			if (count_str[j] != count_fry[j]) {
				possible = 0; 
				break;
			}
		}

		if (possible) {
			printf("Possible\n");
		}
		else {
			printf("Impossible\n");
		}
	}


	return 0;
}