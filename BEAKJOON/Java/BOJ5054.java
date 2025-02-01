import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//주차의 신
public class BOJ5054 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine()); 

        for (int i = 0; i < n; i++) {
            int a = Integer.parseInt(br.readLine()); 
            int[] ary = new int[a]; 
            
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < a; j++) {
                ary[j] = Integer.parseInt(st.nextToken());
            }

            int min = Integer.MAX_VALUE;
            int max = Integer.MIN_VALUE;

            for (int value : ary) {
                if (value < min) {
                    min = value;
                }
                if (value > max) {
                    max = value;
                }
            }
            int d = (max - min) * 2; 
            System.out.println(d);
        }
    }
}
