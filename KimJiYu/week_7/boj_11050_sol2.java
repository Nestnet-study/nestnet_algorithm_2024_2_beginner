package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_7;

import java.util.Scanner;

public class boj_11050_sol2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        // 빠른 반환 조건
        if (k == 0 || k == n) {
            System.out.println(1);
            return;
        }

        // 최적화된 이항 계수 계산
        int result = 1;
        k = Math.min(k, n - k); // nCk = nC(n-k)로 계산량 최소화
        for (int i = 0; i < k; i++) {
            result *= (n - i);
            result /= (i + 1);
        }

        System.out.println(result);
    }
}
