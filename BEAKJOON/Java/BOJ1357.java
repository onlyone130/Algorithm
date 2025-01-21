import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ1357 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        String x = st.nextToken();
        String y = st.nextToken();
 
        String RevX = new StringBuilder(x).reverse().toString();
        String RevY = new StringBuilder(y).reverse().toString();

        int sum = Integer.parseInt(RevX)+Integer.parseInt(RevY);

        String result = new StringBuilder(String.valueOf(sum)).reverse().toString();
        System.out.println(Integer.parseInt(result));
    }
}
