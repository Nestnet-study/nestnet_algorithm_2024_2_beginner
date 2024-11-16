#include <stdio.h>

int main() {
    int room;
    int count[10] = { 0 }; 
   
    scanf("%d", &room);
    
    while (room > 0) {
        int digit = room % 10; 
        count[digit]++; 
        room /= 10; 
    }

    int count69 = count[6] + count[9];
    int sets = (count69+1) / 2; 
    count[6] = sets; 
    count[9] = 0;

    int max = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }

    printf("%d", max);
    return 0;
}
