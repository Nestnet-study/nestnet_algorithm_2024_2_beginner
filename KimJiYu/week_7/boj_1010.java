package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_7;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); // 테스트 케이스 수

        StringBuilder sb = new StringBuilder();
        while (T-- > 0) {
            int N = sc.nextInt(); // 다리를 놓을 사이트 개수
            int M = sc.nextInt(); // 강 서쪽의 사이트 개수

            sb.append(combination(M, N)).append("\n");
        }

        System.out.print(sb);
    }

    // 이항 계수 계산 함수
    public static long combination(int n, int r) {
        if (r > n) return 0; // 불가능한 경우
        if (r == 0 || r == n) return 1; // 조합의 경계 조건

        r = Math.min(r, n - r); // nCr = nC(n-r) 대칭성 활용
        long result = 1;

        for (int i = 0; i < r; i++) {
            result *= (n - i);
            result /= (i + 1);
        }

        return result;
    }
}
