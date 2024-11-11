package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_5;

import java.util.Scanner;

/*
[2839] 설탕 배달
 */
public class boj_2839_sol2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int result = -1;  // 기본적으로 배달 불가로 설정

        // 5kg 봉지를 최대한 많이 사용하고, 남은 무게를 3kg으로 채움
        for (int i = n / 5; i >= 0; i--) {
            int remainder = n - (i * 5);
            if (remainder % 3 == 0) {
                int j = remainder / 3;  // 3kg 봉지의 개수
                result = i + j;         // 총 봉지 개수
                break;
            }
        }

        System.out.println(result);
    }
}
