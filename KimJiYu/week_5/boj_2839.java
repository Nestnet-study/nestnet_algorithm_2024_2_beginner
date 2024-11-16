package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_5;

import java.util.Scanner;

/*
[2839] 설탕 배달
 */
public class boj_2839 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num, x=0, y=0, sum=10000;

        for (int i = 0; i < n; i++) {
            for (int j=0; j < n; j++){
                if(n == i*5 + j*3) {
                    x = i;
                    y = j;
                    if(x+y<sum){
                        sum = x+y;
                    }
                }
            }
        }

        if(x==0&&y==0){
            sum = -1;
        }
        System.out.println(sum);
    }
}
