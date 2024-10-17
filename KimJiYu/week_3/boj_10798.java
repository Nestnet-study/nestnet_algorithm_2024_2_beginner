package nestnet_algorithm_2024_2_beginner.KimJiYu.week_3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
[10798] 세로 읽기
 */
public class boj_10798 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 배열 초기화
        char arr[][] = new char[5][15];

        // 배열 입력
        for(int i=0; i<5; i++ ){
            String str = br.readLine();
            for(int j=0; j<str.length(); j++)
                arr[i][j] = str.charAt(j);
        }

        // 세로 읽기 출력
        for(int j=0; j<15; j++) {
            for(int i=0; i<5; i++ ){
                if (arr[i][j] == '\u0000') continue;
                System.out.print(arr[i][j]);
            }
        }

        br.close();
    }
}
