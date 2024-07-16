import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        while (num-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int c = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            sb.append(String.format("You get %d piece(s) and your dad gets %d piece(s).\n", c/v, c%v));
        }
        System.out.println(sb);
    }
 }
