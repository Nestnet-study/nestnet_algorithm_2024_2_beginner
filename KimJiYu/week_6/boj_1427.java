package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_6;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

/*
[1427] 소트인사이드
 */
public class boj_1427 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        int len = str.length();
        int num = Integer.parseInt(str);
        Integer[] arr = new Integer[len];

        while (len > 0) {
            arr[str.length() - len] = num / (int) Math.pow(10, len - 1);
            num %= (int) Math.pow(10, len - 1);
            len--;
        }

        Arrays.sort(arr, Collections.reverseOrder());
        for (int i = 0; i < arr.length; i++) System.out.print(arr[i]);
    }
}
