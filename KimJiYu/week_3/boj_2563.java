package nestnet_algorithm_2024_2_beginner.KimJiYu.week_3;

import java.util.Scanner;

/*
[2563] 색종이
 */
public class boj_2563 {
    public static void main(String[] args) {
        int i, j, k;
        Scanner sc = new Scanner(System.in);

        // 색종이의 수 입력
        int n = sc.nextInt();

        // 도화지 초기화
        int[][] paper = new int[100][100];

        // 색종이의 위치 입력
        for (i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            // 도화지 채우기
            for (j = 0; j < 10; j++) {
                for (k = 0; k < 10; k++) {
                    paper[x + j][y + k] = 1;
                }
            }
        }

        sc.close();

        // 색종이 넓이 구하기
        int width = 0;
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++)
                width += paper[i][j];

        }

        System.out.println(width);

    }
}
