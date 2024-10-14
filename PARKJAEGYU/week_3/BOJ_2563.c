#include <stdio.h>
int main(void){

    int paper[100][100] = {0};
    int n, x, y;
    int area = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
    
        for (int j = x; j < x + 10; j++)
         {
             for (int k = y; k < y + 10; k++)
             {
                 paper[j][k] = 1;
             }
        
    }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (paper[i][j] == 1)
            {
                area ++;
            }
            
        }
        
    }
    
    printf("%d\n", area);

    return 0;
}
