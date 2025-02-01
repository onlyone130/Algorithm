import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//시그마
public class BOJ2355 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());

        long s = Math.min(a, b);
        long e = Math.max(a, b);

        long n = e-s+1;
        long sum = n*(s+e)/2;

        System.out.println(sum);   
    }
}
