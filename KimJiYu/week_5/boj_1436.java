package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_5;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
[1436] 영화감독 숌
 */
public class boj_1436 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        int count = 0;
        int num = 666;   // 666부터 시작

        while (count != n) {
            // 666을 포함한다면
            if (String.valueOf(num).contains("666")) {
                count++;
            }

            // n번째 종말의 숫자를 찾으면 종료
            if (count == n) {
                break;
            }

            num++;
        }

        System.out.println(num);
    }
}
