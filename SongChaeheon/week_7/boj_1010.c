#include<stdio.h>

#define size 10000

int main(void)
{
	int t, n, m, brd;
	int num[size];
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		brd = 1;
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++)
		{
			brd *= m - j;
			brd /= 1 + j;
		}
		num[i] = brd;
	}
	for (int i = 0; i < t; i++)
		printf("%d\n", num[i]);
	return 0;
}