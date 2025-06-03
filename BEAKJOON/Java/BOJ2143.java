import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

//두 배열의 합
public class BOJ2143 {
    static long T;
    static int N, M;
    static long[] inputA, inputB;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        T = Long.parseLong(br.readLine());

        N = Integer.parseInt(br.readLine());
        inputA = new long[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            inputA[i] = Long.parseLong(st.nextToken());
        }

        M = Integer.parseInt(br.readLine());
        inputB = new long[M];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            inputB[i] = Long.parseLong(st.nextToken());
        }

        // 부분합 리스트 생성
        List<Long> subA = getAllSubSums(inputA);
        List<Long> subB = getAllSubSums(inputB);

        // 오름차순 정렬
        Collections.sort(subA);
        Collections.sort(subB);

        int ptA = 0;
        int ptB = subB.size() - 1;
        long result = 0;

        // 투 포인터 방식
        while (ptA < subA.size() && ptB >= 0) {
            long currentA = subA.get(ptA);
            long currentB = subB.get(ptB);
            long sum = currentA + currentB;

            if (sum == T) {
                long countA = 0;
                long countB = 0;

                // 같은 값 개수 세기 (A 쪽)
                while (ptA < subA.size() && subA.get(ptA) == currentA) {
                    countA++;
                    ptA++;
                }

                // 같은 값 개수 세기 (B 쪽)
                while (ptB >= 0 && subB.get(ptB) == currentB) {
                    countB++;
                    ptB--;
                }

                result += countA * countB;
            } else if (sum < T) {
                ptA++;
            } else {
                ptB--;
            }
        }

        System.out.println(result);
    }

    // 부분합 리스트 구하기
    private static List<Long> getAllSubSums(long[] arr) {
        List<Long> result = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            long sum = 0;
            for (int j = i; j < arr.length; j++) {
                sum += arr[j];
                result.add(sum);
            }
        }
        return result;
    }
}