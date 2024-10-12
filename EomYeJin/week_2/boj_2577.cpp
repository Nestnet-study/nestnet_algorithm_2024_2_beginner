#include <stdio.h>
int cnt[10];

int main() {
    int A, B, C;
    int result;
    int div = 10;
    
    scanf("%d\n %d\n %d", &A, &B, &C);

    result = A*B*C;

    while(result > 0) {
        cnt[result % div]++;
        result /= div;
    }
        
		
	for(int i=0; i<10; i++) 
		printf("%d\n",cnt[i]);


    return 0;
    
}