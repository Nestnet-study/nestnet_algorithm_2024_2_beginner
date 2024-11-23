#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char f[11];
    int arr[10];

    scanf("%s", f);

    int len = strlen(f);

    for (int i = 0; i < len; i++)
    {
        arr[i] = f[i] - '0';
    }
    

    for (int i = 0; i < len-1; i++)
    {
        int temp;
        for (int j = i+1; j < len; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
    }
    
    


    return 0;
}
