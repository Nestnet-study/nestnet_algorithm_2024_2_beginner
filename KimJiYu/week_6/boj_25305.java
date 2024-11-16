package nestnet_algorithm_2024_2_beginner.KimJiYu.week_6;

import java.util.Arrays;
import java.util.Scanner;
/*
[25305] 커트라인
 */
public class boj_25305 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] x = new int[n];
        for(int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }

        Arrays.sort(x);
        System.out.print(x[n-k]);
    }
}

