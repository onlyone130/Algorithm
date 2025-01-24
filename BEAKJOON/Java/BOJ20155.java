import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ20155 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int ary[] = new int[m+1];
        
        st = new StringTokenizer(br.readLine());
        for(int i=0;i<n;i++){
            int a = Integer.parseInt(st.nextToken());
            ary[i]++;
        }
        int sum = 0;
        for(int i=0;i<=m;i++){
            sum = Math.max(sum, ary[i]);
        }
        sb.append(sum);
        System.out.println(sb.toString());
    }
}