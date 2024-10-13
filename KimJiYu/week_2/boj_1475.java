package nestnet_algorithm_2024_2_beginner.KimJiYu.week_2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

/*
[1457] 방 번호
 */
public class boj_1475 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        int[] arr = new int[9];

        for (int i = 0; i < s.length(); i++) {
            int num = Character.getNumericValue(s.charAt(i));

            // 9는 6으로 변환
            if (num == 9) {
                arr[6]++;
            } else {
                arr[num]++;
            }
        }

        // 6과 9를 합한 값이므로 절반으로 계산
        arr[6] = arr[6] / 2 + arr[6] % 2;

        // 최댓값 출력
        Arrays.sort(arr);
        System.out.println(arr[8]);
    }
}
