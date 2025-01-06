import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        
        int c = Integer.parseInt(st.nextToken()); 
        int d = Integer.parseInt(st.nextToken());

        int cnt = 0;

        if(a+d<b+c){
            cnt += a;
            cnt += d;
        } else {
            cnt += c;
            cnt += b;
        }

        System.out.println(cnt);
    }
}
