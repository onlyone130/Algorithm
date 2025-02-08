import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//블랙잭 
public class BOJ2798 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine().trim());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int ary[] = new int[n];

        st = new StringTokenizer(br.readLine().trim());

        for(int i=0;i<n;i++){
            ary[i] = Integer.parseInt(st.nextToken());
        }

        int max = 0;
        for (int i=0;i<n-2;i++) {
            for (int j=i+1;j<n-1;j++) {
                for (int k=j+1;k<n;k++) {
                    int sum = ary[i] + ary[j] + ary[k];
        
                    if (sum <= m && sum > max) {
                        max = sum;
                    }
                }
            }
        }
        System.out.println(max);
    }
}
