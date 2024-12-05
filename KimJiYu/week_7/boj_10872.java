package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_7;

import java.util.Scanner;

/*
[10872] 팩토리얼
 */
public class boj_10872 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int fact = 1;

        if (num == 1){
            System.out.println(fact);
        }else {
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
            System.out.println(fact);
        }
    }
}
