import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//시간초과
public class BOJ15702 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;

        for(int i=1;i*i<=n;i++){
            if (n%i==0) {
                cnt++;
                if (i != n/i) {
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}