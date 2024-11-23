package org.example.nestnet_algorithm_2024_2_beginner.KimJiYu.week_6;

import java.util.*;

/*
[11650] 좌표 정렬하기
 */
public class boj_11650 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Point[] points = new Point[N];
        for (int i = 0; i < N; i++) {
            points[i] = new Point(sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(points, (p1, p2) -> {
            if (p1.x == p2.x) return Integer.compare(p1.y, p2.y);
            return Integer.compare(p1.x, p2.x);
        });
        StringBuilder sb = new StringBuilder();
        for (Point point : points) {
            sb.append(point.x).append(" ").append(point.y).append("\n");
        }
        System.out.print(sb);
    }

    static class Point {
        int x, y;
        Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }
}
