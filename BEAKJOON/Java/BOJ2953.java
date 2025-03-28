import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//나는 요리사다
public class BOJ2953 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int maxScore = 0;  
        int winner = 0;    

        for (int i = 0; i < 5; i++) { 
            StringTokenizer st = new StringTokenizer(br.readLine());
            int sum = 0;

            for (int j = 0; j < 4; j++) {
                sum += Integer.parseInt(st.nextToken());
            }

            if (sum > maxScore) {
                maxScore = sum;
                winner = i + 1;
            }
        }

        System.out.println(winner + " " + maxScore);
    }
}
