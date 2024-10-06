#include<stdio.h>

int main(void){
    int n[9];
    int k = 0;
    int max = 0;
    for(int i=0; i<9; i++){
        scanf("%d", &n[i]);
        if(n[i]>max){
            max=n[i];
            k=i;
        }
    }
    
    printf("%d\n%d", max, k+1);
}