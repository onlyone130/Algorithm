import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//주사위 게임
public class BOJ10103 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  
        int n = Integer.parseInt(br.readLine());

        int score1 = 100;
        int score2 = 100;

        for(int i=0;i<n;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
        
            if (a > b) {
                score2 -= a;
            } else if (a < b) {
                score1 -= b;
            }
        }
        System.out.println(score1);
        System.out.println(score2);
    }
}
