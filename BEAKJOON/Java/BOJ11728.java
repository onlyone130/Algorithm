import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ11728 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        int ary1[] = new int[n];
        int ary2[] = new int[k];

        st = new StringTokenizer(br.readLine());
        for(int i=0;i<n;i++){
            ary1[i] = Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for(int i=0;i<k;i++){
            ary2[i] = Integer.parseInt(st.nextToken());
        }

        int ary3[] = new int[n+k];
        System.arraycopy(ary1, 0, ary3, 0, n);
        System.arraycopy(ary2, 0, ary3, n, k);

        Arrays.sort(ary3);

        StringBuilder sb = new StringBuilder();
        for (int num : ary3) {
            sb.append(num).append(" ");
        }
        System.out.println(sb.toString().trim());
    }
}