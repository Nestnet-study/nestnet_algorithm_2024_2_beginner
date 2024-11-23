package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_7;

import java.util.Scanner;

/*
[11050] 이항 계수 1
 */
public class boj_11050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int result;
        int nfact=1, kfact=1, nkfact=1;

        if(n==k) {
            System.out.println(1);
        } else {
            for(int i=1; i<=n; i++) {
                nfact *= i;
            }
            for(int i=1; i<=k; i++) {
                kfact *= i;
            }
            for(int i=1; i<=(n-k); i++) {
                nkfact *= i;
            }
            result = nfact/(kfact*nkfact);
            System.out.println(result);
        }
    }
}
