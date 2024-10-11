package nestnet_algorithm_2024_2_beginner.KimJiYu.week_2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
[2577] 숫자의 개수
Soloution2 : BufferedReader 사용하기 + String 변환
 */
public class boj_2577_sol2 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int A = Integer.parseInt(br.readLine());
        int B = Integer.parseInt(br.readLine());
        int C = Integer.parseInt(br.readLine());


        int result = A * B * C;
        String s = String.valueOf(result);
        int[] count = new int[10];

        for (int i = 0; i < s.length(); i++) {
            count[Character.getNumericValue(s.charAt(i))]++;
        }
        for (int i = 0; i < count.length; i++) {
            System.out.println(count[i]);
        }


    }

}
