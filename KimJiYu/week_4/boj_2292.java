package nestnet_algorithm_2024_2_beginner.KimJiYu.week_4;

import java.util.Scanner;

/*
[2292] 벌집
 */
public class boj_2292 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (n == 1) {
            System.out.println(1);
            return;
        }

        int layer = 1; // 현재 계층
        int range = 2; // 범위의 시작점 (1을 제외한 다음부터 시작)

        while (range <= n) {
            range += 6 * layer; // 각 계층에서 방의 개수는 6의 배수로 증가
            layer++;
        }

        System.out.println(layer);
        scanner.close();
    }
}
`:
