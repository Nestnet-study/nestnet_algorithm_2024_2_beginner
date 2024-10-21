#include <stdio.h>

void scanarr(int n, int m, int arr[n][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
        
    }
}

int main(void){

    int n, m;

    scanf("%d %d", &n, &m);

    int arr1[n][m];
    int arr2[n][m];
    int copyarr[n][m];

    scanarr(n ,m, arr1);
    scanarr(n, m, arr2);

     for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            copyarr[i][k] = arr1[i][k] + arr2[i][k];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int w = 0; w < m; w++)
        {
            printf("%d ", copyarr[i][w]);
        }
        printf("\n");
    }


    return 0;
}
