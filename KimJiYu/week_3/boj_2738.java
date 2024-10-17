package nestnet_algorithm_2024_2_beginner.KimJiYu.week_3;

/*
[2738] 행렬 덧셈
 */

import java.util.Scanner;

public class boj_2738 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i, j;

        // 행렬의 크기 입력
        int n = sc.nextInt();
        int m = sc.nextInt();

        // 행렬 초기화
        int a[][] = new int[n][m];
        int b[][] = new int[n][m];
        int sum[][] = new int[n][m];


        // 행렬 A, B 입력
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        sc.close();

        // 행렬 덧셈 및 출력
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }

    }
}
