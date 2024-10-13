package nestnet_algorithm_2024_2_beginner.KimJiYu.week_2;

import java.util.Arrays;
import java.util.Scanner;

/*
[11328] Strfry
 */
public class boj_11328 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // 테스트 케이스의 수
        int n = in.nextInt();
        in.nextLine();

        while (n-- > 0) {
            String str1 = in.next();
            String str2 = in.next();

            if (str1.length() != str2.length()) {
                System.out.println("Impossible");
                continue;
            }

            // 문자 배열로 전환
            char[] chArr1 = str1.toCharArray();
            char[] chArr2 = str2.toCharArray();

            // 알파벳순으로 정렬
            Arrays.sort(chArr1);
            Arrays.sort(chArr2);

            if (Arrays.equals(chArr1, chArr2)) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
        }
        in.close();
    }
}