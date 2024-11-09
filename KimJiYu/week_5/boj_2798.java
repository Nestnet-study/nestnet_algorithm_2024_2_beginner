package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_5;

import java.util.Scanner;

/*
[2798] 블랙잭
 */
public class boj_2798 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();   //카드의 개수
        int M = sc.nextInt();   //합
        int[] cards = new int[N];

        //카드 숫자 입력 받기
        for (int i = 0; i < N; i++) {
            cards[i] = sc.nextInt();
        }

        int maxSum = 0;

        //모든 세 장의 카드 조합 확인
        for (int i = 0; i < N - 2; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    int currentSum = cards[i] + cards[j] + cards[k];

                    //M을 넘지 않는 최대 합
                    if (currentSum <= M & currentSum > maxSum) {
                        maxSum = currentSum;
                    }
                }
            }
        }
        System.out.println(maxSum);
    }
}
