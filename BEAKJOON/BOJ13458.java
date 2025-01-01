import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a[] = new int[n];
        
        for(int i=0;i<n;i++){
            a[i] = Integer.parseInt(st.nextToken());
        }

        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        long cnt = n;
        for(int i=0;i<n;i++){
            if(a[i]>b){
                cnt += ((long)a[i] - b) / c;
                if ((a[i] - b) / c != 0) {
                cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}
