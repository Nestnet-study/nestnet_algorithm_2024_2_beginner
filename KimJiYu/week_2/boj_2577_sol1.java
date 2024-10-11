package nestnet_algorithm_2024_2_beginner.KimJiYu.week_2;

import java.util.Scanner;

/*
[2577] 숫자의 개수
Soloution1 : Scanner 사용하기
 */
public class boj_2577_sol1 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int C = in.nextInt();
        in.close();

        int result = A * B * C;
        int[] count = new int[10];

        while (result > 0) {
            count[result % 10]++;
            result /= 10;
        }

        for (int i = 0; i < count.length; i++) {
            System.out.println((count[i]));
        }
    }
}
