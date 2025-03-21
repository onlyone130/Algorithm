import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

//N 찍기
public class BOJ2741 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int cnt = 1;

        while(cnt != n){
            System.out.println(cnt);
            cnt++;
        }
        System.out.println(n);
    }
}
