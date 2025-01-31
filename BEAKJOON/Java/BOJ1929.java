import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ1929 {
    public static boolean[] primeNum ;
     public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int m = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());

        primeNum = new boolean[n+1];
        prime(n);

        StringBuilder sb = new StringBuilder();

        for(int i=m;i<=n;i++){
            if (!primeNum[i]) {
                sb.append(i).append('\n');
            }
        }
        System.out.println(sb);
    }
    public static void prime(int n){
        primeNum[0] = primeNum[1] = true;

        for(int i=2;i<=Math.sqrt(n);i++){
            if (primeNum[i]) {
                continue;
            }
            for(int j=i*i;j<=n;j+=i){
                primeNum[j] = true;
            }
        }
    }
}
