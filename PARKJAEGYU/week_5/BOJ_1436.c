#include <stdio.h>
#include <string.h>
int main(void){

    int n;
    scanf("%d", &n);

    int count = 0;
    int number = 666;

    while(1){
        char str[20];
        sprintf(str, "%d", number);

        if (strstr(str, "666")!= NULL)
        {
            count ++;
        }

        if (count == n)
        {
            printf("%d\n", number);
            break;
        }
        
        number ++;

    }




    return 0;
}
