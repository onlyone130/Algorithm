import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    final static int INF = 1000;  // 큰 값으로 초기화 (1 << 30은 너무 크기 때문에 적절한 값으로 변경)
    static int[] a;
    static int[][] dp;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // n: 전구의 개수, k: 색깔의 수
        String[] firstLine = br.readLine().split(" ");
        int n = Integer.parseInt(firstLine[0]);
        int k = Integer.parseInt(firstLine[1]);

        // 전구 색깔 배열 입력
        a = new int[n + 1];
        int[] colors = Arrays.stream(br.readLine().split(" "))
                             .mapToInt(Integer::parseInt)
                             .toArray();
        
        // 중복된 색깔 제거
        int index = 1;
        a[index] = colors[0];
        for (int i = 1; i < n; i++) {
            if (colors[i] != a[index]) {
                a[++index] = colors[i];
            }
        }
        n = index;

        // DP 배열 초기화
        dp = new int[n + 1][n + 1];
        for (int[] row : dp) {
            Arrays.fill(row, INF);
        }

        // DP 초기 조건 설정
        for (int i = 1; i <= n; i++) {
            dp[i][i] = 0;
        }

        // DP 상태 전이
        for (int size = 2; size <= n; size++) {
            for (int start = 1; start + size - 1 <= n; start++) {
                int end = start + size - 1;
                for (int mid = start; mid < end; mid++) {
                    dp[start][end] = Math.min(dp[start][end], dp[start][mid] + dp[mid + 1][end] + (a[start] != a[mid + 1] ? 1 : 0));
                }
            }
        }

        // 결과 출력
        System.out.println(dp[1][n]);
    }
}
