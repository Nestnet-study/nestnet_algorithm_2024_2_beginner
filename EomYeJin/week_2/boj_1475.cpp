#include <iostream>
#include <vector>

int freq[9];

int main() {
    int N;
    int div = 10;
    scanf("%d", &N);
        
    while(N>0) {
        freq[N%div]++; 
        
        if(N%div == 9)  
            freq[6]++;   
        
        N /= div;
    }
    
    
    freq[6]++;
    freq[6] /= 2;
    
    int max = 0;

    for(int i=0; i<9; i++){
        if(freq[i] > max)
            max = freq[i];
    }
    printf("%d", max);
}