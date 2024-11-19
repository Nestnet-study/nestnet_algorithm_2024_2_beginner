package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_5;

import java.util.Scanner;

/*
[2231] 분해합
 */
public class boj_2231 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result = 0;

        for (int i = 1; i < n; i++) {
            int sum = i;    //분해합 저장을 위해 사용
            int num = i;    //자릿수 분해를 위해 사용

            //자릿수 더하기
            while (num != 0) {
                sum += num % 10;
                num /= 10;
            }

            //분해합이 n과 같은지 확인
            if (sum == n) {
                result = i; //생성자
                break;
            }
        }

        System.out.println(result);
    }
}
