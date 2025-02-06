import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ9085 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        for (int i=0;i<n;i++) {
            int m = Integer.parseInt(br.readLine());
            int sum = 0;
            StringTokenizer st = new StringTokenizer(br.readLine());

            for (int j=0;j<m;j++) {
                sum += Integer.parseInt(st.nextToken());
            }
            System.out.println(sum);
        }
	}
}
