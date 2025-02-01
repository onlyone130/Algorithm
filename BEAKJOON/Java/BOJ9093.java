import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//단어 뒤집기
public class BOJ9093 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();

        for(int i=0;i<n;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());

            while (st.hasMoreTokens()) {
                String word = st.nextToken();
                sb.append(new StringBuilder(word).reverse().toString()).append(" ");
            }
            sb.append("\n");
        }
        System.out.println(sb.toString());
    }
}
