package nestnet_algorithm_2024_2_beginner.KimJiYu.week_4;

import java.util.Scanner;

/*
[1193] 분수찾기
 */
public class boj_1193 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;

        // i(i+1)/2가 n보다 커질 때까지 반복
        while (i * (i + 1) / 2 < n) {
            i++;
        }

        // 대각선 번호 i에서의 위치를 찾기
        int positionInDiagonal = n - (i - 1) * i / 2;
        int numerator, denominator;

        // 대각선이 짝수인지 홀수인지에 따라 분자와 분모를 설정
        if (i % 2 == 0) {  // 짝수 대각선
            numerator = positionInDiagonal;
            denominator = i - positionInDiagonal + 1;
        } else {  // 홀수 대각선
            numerator = i - positionInDiagonal + 1;
            denominator = positionInDiagonal;
        }

        System.out.println(numerator + "/" + denominator);
    }
}

