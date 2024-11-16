package nestnet_algorithm_2024_2_beginner.KimJiYu.week_6;

import java.util.Arrays;
import java.util.Scanner;

/*
[2587] 대표값2
 */
public class boj_2587 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        int sum = 0;

        // 평균값
        for(int i = 0; i < 5; ++i){
            arr[i] = sc.nextInt();
            sum += arr[i];
        }
        System.out.println(sum/5);

        // 중앙값
        Arrays.sort(arr);
        System.out.println(arr[2]);

        sc.close();
    }
}
